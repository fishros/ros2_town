#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from village_interfaces.srv import BorrowMoney

class Li3Node(Node):
    """
    创建一个李三节点，并在初始化时输出一个话
    """
    def __init__(self):
        super().__init__("li3")
        #打印一句话
        self.get_logger().info("大家好，我是李三，李四他哥，我可以白嫖李四的小说！")
        #创建一个订阅客户端，用于订阅小说
        self.sub_ = self.create_subscription(String,"sexy_girl", self.recv_callback,10)
        #创建一个服务客户端
        self.borrow_money_client_ = self.create_client(BorrowMoney, "borrow_money")
        
    def borrow_money_eat(self):
        """
        借钱吃麻辣烫函数
        """
        #打印一句话
        self.get_logger().info("找我弟借钱吃麻辣烫喽")
        #等待服务启动，每1s检查一次，如果服务没有启动，则一直循环
        while not self.borrow_money_client_.wait_for_service(1.0):
            self.get_logger().warn("我弟不在线，我再等等")
        # 构建请求内容
        request = BorrowMoney.Request()
        #将当前节点名称作为借钱者姓名
        request.name = self.get_name()
        #借钱金额10元
        request.money = 10
        #发送异步借钱请求，借钱成功后就调用borrow_respoonse_callback()函数
        self.borrow_money_client_.call_async(request).add_done_callback(self.borrow_respoonse_callback)

    def borrow_respoonse_callback(self,response):
        """
        借钱结果回调
        """
        # 打印一下信息
        result = response.result()
        if result.success == True:
            self.get_logger().info("果然是亲弟弟，借到%d,吃麻辣烫去了" % result.money)
        else:
            self.get_logger().info("害，连几块钱都不借,我还是不是他亲哥了，世态炎凉呀")

    def recv_callback(self,novel):
        """
        小说接收结果回调
        """
        # 打印接收小说结果
        self.get_logger().info('李三：我已经收到了：%s' % novel.data)


def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = Li3Node()  # 新建一个节点
    node.borrow_money_eat() #李三借钱
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）  
    rclpy.shutdown() # rcl关闭