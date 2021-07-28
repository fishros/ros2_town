#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


class LisiNode(Node):
    """
    创建一个李四节点，并在初始化时输出一个话
    """
    def __init__(self):
        super().__init__("lisi")
        self.get_logger().info("大家好，我是艳娘传奇作者李四！")



def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = LisiNode()  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭

