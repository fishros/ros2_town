#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String,UInt32
from village_interfaces.srv import BorrowMoney

class Li4Node(Node):
    """
    创建一个李四节点，并在初始化时输出一个话
    """
    def __init__(self):
        super().__init__("li4")
        self.get_logger().info("大家好，我是李四,我是一名作家！")
        self.write = self.create_publisher(String,"sexy_girl", 10) 
        timer_period = 1  #李四的手速，每1s写一段话，够不够快
        self.timer = self.create_timer(timer_period, self.timer_callback)  #启动一个定时装置，每 1 s,调用一次time_callback函数
        self.i = 0 # i 是个计数器，用来算章节编号的
        # 账户钱的数量
        self.account = 0
        # 开启收钱箱
        self.sub_ = self.create_subscription(UInt32,"sexy_girl_money",self.recv_money_callback,10)
        # 新建借钱服务
        self.borrow_server = self.create_service(BorrowMoney, "borrow_money", self.callback_set_led)
    
    def borrow_money_callback(self,request, response):
        self.get_logger().info("recv borrow request: %s" % request.name)
        return response

    def callback_set_led(self, request, response):
        response.success = True
        return response


    def timer_callback(self):
        msg = String()
        msg.data = '第%d回：潋滟湖 %d 次偶遇胡艳娘' % (self.i,self.i)
        self.write.publish(msg)  #将小说内容发布出去
        self.get_logger().info('李四:我发布了艳娘传奇："%s"' % msg.data)    #打印一下发布的数据，供我们看
        self.i += 1 #章节编号+1

    def recv_money_callback(self,money):
        self.account += money.data
        self.get_logger().log('李四：我已经收到了%d的稿费' % self.account)


def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = Li4Node()  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭