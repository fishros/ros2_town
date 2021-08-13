#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from village_interfaces.srv import BorrowMoney
import threading

class Li3Node(Node):
    """
    创建一个李三节点，并在初始化时输出一个话
    """
    def __init__(self):
        super().__init__("li3")
        self.get_logger().info("大家好，我是李三，李四他哥，我可以白嫖李四的小说！")
        self.sub_ = self.create_subscription(String,"sexy_girl", self.recv_callback,10)
        self.borrow_money_timer_ = self.create_timer(6,self.borrow_money_eat)
        
    def borrow_money_eat(self):
        self.get_logger().info("找我哥借钱吃麻辣烫喽")
        self.borrow_money_client_ = self.create_client(BorrowMoney, "borrow_money")
        request = BorrowMoney.Request()
        request.name.data = self.get_name()
        request.money.data = 5
        response = self.borrow_money_client_.call_async(request)


    def recv_callback(self,novel):
        self.get_logger().info('李三：我已经收到了：%s' % novel.data)
        self.get_logger().info("当前进程中线程数量：%d" % len(threading.enumerate()))

def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = Li3Node()  # 新建一个节点
    
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭