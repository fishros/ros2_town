#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = Node("li4")  # 新建一个节点
    node.get_logger().info("Hello I am li4!")
    # rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭
