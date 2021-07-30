#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"

using std::placeholders::_1;
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
        pub_ = this->create_publisher<std_msgs::msg::UInt32>("sexy_girl_money",10);
    }

private:
    // 声明一个订阅者（成员变量）
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub_;

    void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
    {
        // 新建一张人民币
        std_msgs::msg::UInt32 money;
        money.data = 10;
        // 发送人民币给李四
        pub_->publish(money);
        RCLCPP_INFO(this->get_logger(), "王二：我收到了：'%s' ，并给了李四：%d 元的稿费", msg->data.c_str(),money.data);
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