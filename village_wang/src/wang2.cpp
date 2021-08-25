#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"
#include "village_interfaces/srv/sell_novel.hpp"
#include <queue>

using std::placeholders::_1;
using std::placeholders::_2;

/*
    创建一个类节点，名字叫做Wang2Node,继承自Node.
*/
class Wang2Node : public rclcpp::Node 
{

public:
    // 构造函数
    Wang2Node() : Node("wang2")
    {
        // 打印一句自我介绍
        RCLCPP_INFO(this->get_logger(), "大家好，我是单身汉王二.");
        // 创建一个订阅者来订阅李四写的小说，通过名字sexy_girl
        sub_ = this->create_subscription<std_msgs::msg::String>("sexy_girl", 10, std::bind(&Wang2Node::topic_callback, this, _1));
        // 创建发布者
        pub_ = this->create_publisher<std_msgs::msg::UInt32>("sexy_girl_money",10);
        //实例化回调组
        callback_group_service_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
        // 实例化卖二手书的服务
        server_ = this->create_service<village_interfaces::srv::SellNovel>("sell_novel",
                                    std::bind(&Wang2Node::sell_book_callback,this,_1,_2),
                                    rmw_qos_profile_services_default,
                                    callback_group_service_);
    }

private:
    // 声明一个服务回调组
    rclcpp::CallbackGroup::SharedPtr callback_group_service_;

    // 声明一个订阅者（成员变量）
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;

    // 声明一个发布者（成员变量） 
    rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub_;

    //创建一个小说章节队列
    std::queue<std::string>  novels_queue;

    // 声明一个服务端
    rclcpp::Service<village_interfaces::srv::SellNovel>::SharedPtr server_;

    // 收到话题数据的回调函数
    void topic_callback(const std_msgs::msg::String::SharedPtr msg){
        // 新建一张人民币
        std_msgs::msg::UInt32 money;
        money.data = 10;

        // 发送人民币给李四
        pub_->publish(money);
        RCLCPP_INFO(this->get_logger(), "王二：我收到了：'%s' ，并给了李四：%d 元的稿费", msg->data.c_str(),money.data);

        //将小说放入novels_queue中
        novels_queue.push(msg->data);
    };

    // 声明一个回调函数，当收到买书请求时调用该函数，用于处理数据
    void sell_book_callback(const village_interfaces::srv::SellNovel::Request::SharedPtr request,
        const village_interfaces::srv::SellNovel::Response::SharedPtr response)
    {
        RCLCPP_INFO(this->get_logger(), "收到一个买书请求，一共给了%d钱",request->money);
        int novelsNum = request->money*1;  //应给小说数量，一块钱一章

        //判断当前书库里书的数量是否满足张三要买的数量，不够则进入等待函数
        if(novels_queue.size()<novelsNum)
        {
            RCLCPP_INFO(this->get_logger(), "当前艳娘传奇章节存量为%d：不能满足需求,开始等待",novels_queue.size());

            // 设置rate周期为1s，代表1s检查一次
            rclcpp::Rate loop_rate(1);

            //当书库里小说数量小于请求数量时一直循环
            while (novels_queue.size()<novelsNum)
            {
                //判断系统是否还在运行
                if(!rclcpp::ok())
                {
                    RCLCPP_ERROR(this->get_logger(), "程序被终止了");
                    return ;
                }
                //打印一下当前的章节数量和缺少的数量
                RCLCPP_INFO(this->get_logger(), "等待中，目前已有%d章，还差%d章",novels_queue.size(),novelsNum-novels_queue.size());

                //rate.sleep()让整个循环1s运行一次
                loop_rate.sleep();
            }
        }
        // 章节数量满足需求了
        RCLCPP_INFO(this->get_logger(), "当前艳娘传奇章节存量为%d：已经满足需求",novels_queue.size());

        //一本本把书取出来，放进请求响应对象response中
        for(int i =0 ;i<novelsNum;i++)
        {
            response->novels.push_back(novels_queue.front());
            novels_queue.pop();
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*产生一个Wang2的节点*/
    auto node = std::make_shared<Wang2Node>();
    /* 运行节点，并检测退出信号*/
    rclcpp::executors::MultiThreadedExecutor exector;
    exector.add_node(node);
    exector.spin();
    rclcpp::shutdown();
    return 0;
}