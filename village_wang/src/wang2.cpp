#include "rclcpp/rclcpp.hpp"

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