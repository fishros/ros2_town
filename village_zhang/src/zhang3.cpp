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
    Zhang3Node() : Node("wang2")
    {
        callback_group_subscriber1_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
        auto sub1_opt = rclcpp::SubscriptionOptions();
        sub1_opt.callback_group = callback_group_subscriber1_;
        // 打印一句自我介绍
        RCLCPP_INFO(this->get_logger(), "大家好，我是单身汉王二.");
        client_ = this->create_client<village_interfaces::srv::SellNovel>("sell_novels");
    }

private:
    rclcpp::CallbackGroup::SharedPtr callback_group_subscriber1_;
    // 创建一个发布者 
    rclcpp::Client<village_interfaces::srv::SellNovel>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*产生一个Wang2的节点*/
    auto node = std::make_shared<Zhang3Node>();
    /* 运行节点，并检测退出信号*/
    rclcpp::executors::MultiThreadedExecutor exector;
    exector.add_node(node);
    exector.spin();
    rclcpp::shutdown();
    return 0;
}