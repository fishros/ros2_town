#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Li3Node(Node):
    """
    创建一个李三节点，并在初始化时输出一个话
    """
    def __init__(self):
        super().__init__("li3")
        self.get_logger().info("大家好，我是李三，李四他哥，我可以白嫖李四的小说！")
        self.sub_ = self.create_subscription(String,"sexy_girl",self.recv_callback,10)

    def recv_callback(self,novel):
        self.get_logger().info('李三：我已经收到了：%s' % novel.data)


def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = Li3Node()  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭