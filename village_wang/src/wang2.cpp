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
    Wang2Node() : Node("wang2")
    {
        // 打印一句自我介绍
        RCLCPP_INFO(this->get_logger(), "大家好，我是单身汉王二.");
        // 创建一个订阅者来订阅李四写的小说，通过名字sexy_girl
        sub_ = this->create_subscription<std_msgs::msg::String>("sexy_girl", 10, std::bind(&Wang2Node::topic_callback, this, _1));
        // 创建发布者
        pub_ = this->create_publisher<std_msgs::msg::UInt32>("sexy_girl_money",10);
        // 创建卖二手书的服务
        server_ = this->create_service<village_interfaces::srv::SellNovel>("sell_book",std::bind(&Wang2Node::sell_book_callback,this,_1,_2));
    }

private:
    // 声明一个订阅者（成员变量）
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
    // 创建一个发布者（成员变量） 
    rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub_;
    //创建一个小说章节队列
    std::queue<std::string>  novels_queue;
    // 创建一个发布者 
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
    
    void sell_book_callback(const village_interfaces::srv::SellNovel::Request::SharedPtr request,
        const village_interfaces::srv::SellNovel::Response::SharedPtr response)
    {
        RCLCPP_INFO(this->get_logger(), "收到一个买书请求，一共给了%d钱",request->money);
        if(novels_queue.size()<request->money)
        {
            RCLCPP_INFO(this->get_logger(), "当前艳娘传奇章节存量为%d：不能满足需求,开始等待",novels_queue.size());
            rclcpp::Rate loop_rate(1);
            while (novels_queue.size()<request->money && rclcpp::ok())
            {
                // rclcpp::spin_some(this);
                RCLCPP_INFO(this->get_logger(), "等待中，目前已有%d章",novels_queue.size());
                loop_rate.sleep();
            }
        }
        RCLCPP_INFO(this->get_logger(), "当前艳娘传奇章节存量为%d：已经满足需求",novels_queue.size());
            int novelsNum = request->money*1;  //一块钱一章
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
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}