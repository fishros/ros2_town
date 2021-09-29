#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class BaiPiaoNode(Node):
    """
    创建一个李三节点，并在初始化时输出一个话
    """
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是白嫖党%s，我可以白嫖李四的小说！"% name)
        self.sub_ = self.create_subscription(String,"sexy_girl",self.recv_callback,10)

    def recv_callback(self,novel):
        self.get_logger().info('我已经收到了：%s' % novel.data)


def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = BaiPiaoNode("li3")  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭