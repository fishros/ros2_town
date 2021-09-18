#include "rclcpp/rclcpp.hpp"
#include "village_interfaces/srv/sell_novel.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

/*
    创建一个类节点，名字叫做Zhang3Node,继承自Node.
*/
class Zhang3Node : public rclcpp::Node
{

public:
    Zhang3Node() : Node("zhang3")
    {
        // 打印一句自我介绍
        RCLCPP_INFO(this->get_logger(), "大家好，我是得了穷病的张三.");
        //实例化客户端
        client_ = this->create_client<village_interfaces::srv::SellNovel>("sell_novel");
    }

    void buy_novel()
    {
        RCLCPP_INFO(this->get_logger(), "买小说去喽");
        //等待服务端上线
        while (!client_->wait_for_service(std::chrono::seconds(1)))
        {
            //等待时检测rclcpp的状态
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "等待服务的过程中被打断...");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "等待服务端上线中");
        }
        //构造请求的钱
        auto request = std::make_shared<village_interfaces::srv::SellNovel_Request>();
        //先来五块钱的看看好不好看
        request->money = 5; 
        //发送异步请求，然后等待返回，返回时调用回调函数
        client_->async_send_request(request,std::bind(&Zhang3Node::novels_callback, this, _1));
    };
    //创建接收到小说的回调函数
    void novels_callback(rclcpp::Client<village_interfaces::srv::SellNovel>::SharedFuture  response)
    {
        auto result = response.get();
        RCLCPP_INFO(this->get_logger(), "收到%d章的小说，现在开始按章节开读", result->novels.size());
        for(std::string novel:result->novels)
        {
            //打印小说章节内容
            RCLCPP_INFO(this->get_logger(), "%s", novel.c_str());
        }
        RCLCPP_INFO(this->get_logger(), "小说读完了，好刺激，写的真不错，好期待下面的章节呀！");
    }

private:
    // 创建一个客户端
    rclcpp::Client<village_interfaces::srv::SellNovel>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*产生一个Zhang3的节点*/
    auto node = std::make_shared<Zhang3Node>();
    node->buy_novel();
    /* 运行节点，并检测rclcpp状态*/
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}