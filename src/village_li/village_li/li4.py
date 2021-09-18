#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String,UInt32
#从村庄接口服务类中导入借钱服务
from village_interfaces.srv import BorrowMoney
from sensor_msgs.msg import Image
#从村庄接口话题消息类中导入小说消息类型
from village_interfaces.msg import Novel

class Li4Node(Node):
    """
    创建一个李四节点，并在初始化时输出一个话
    """
    def __init__(self):
        super().__init__("li4")
        self.get_logger().info("大家好，我是李四,我是一名作家！")
        self.write = self.create_publisher(Novel,"sexy_girl", 10) 
        timer_period = 5  #每5s写一章节话
        self.timer = self.create_timer(timer_period, self.timer_callback)  #启动一个定时装置，每 1 s,调用一次time_callback函数
        self.i = 0 # i 是个计数器，用来算章节编号的
        # 账户钱的数量
        self.account = 80
        # self.image = None
        # 开启收钱箱
        self.sub_ = self.create_subscription(UInt32,"sexy_girl_money",self.recv_money_callback,10)
        # 新建借钱服务
        self.borrow_server = self.create_service(BorrowMoney, "borrow_money", self.borrow_money_callback)
        # 声明参数,参数名字，默认值
        self.declare_parameter("write_timer_period",5)
        # 开始获取图片
        self.create_subscription(Image,"image",self.recv_image_callback,10)


    def borrow_money_callback(self,request, response):
        """
        借钱回调函数
        参数：request 客户端请求
             response： 服务端响应
        返回值：response
        """
        #根据李四借钱规则，借出去的钱不能多于自己所有钱的十分之一，不然就不借
        self.get_logger().info("收到来自: %s 的借钱请求，目前账户内还有%d元" % (request.name, self.account))
        if request.money <= int(self.account*0.1):
            response.success = True
            response.money = request.money
            self.account = self.account - request.money
            self.get_logger().info("借钱成功，借出%d 元 ,目前账户余额%d 元" % (response.money,self.account))
        else:
            response.success = False
            response.money = 0
            self.get_logger().info("对不起兄弟，手头紧,不能借给你")
        return response

    def timer_callback(self):
        msg = Novel()
        msg.content = '第%d回：潋滟湖 %d 次偶遇胡艳娘' % (self.i,self.i)
        msg.image = self.image
        self.write.publish(msg)  #将小说内容发布出去
        self.get_logger().info('李四:我发布了艳娘传奇："%s"' % msg.content)    #打印一下发布的数据，供我们看
        self.get_logger().info('李四:为艳娘传奇配上了插图，长：%d，宽：%d' % (msg.image.height,msg.image.width))    #打印一下发布的插图尺寸，供我们看
        self.i += 1 #章节编号+1

        # 回调之后更新回调周期
        timer_period = self.get_parameter('write_timer_period').get_parameter_value().integer_value
        # 更新回调周期
        self.timer.timer_period_ns = timer_period * (1000*1000*1000)


    def recv_money_callback(self,money):
        self.account += money.data
        #self.get_logger().info('李四：我已经收到了%d的稿费' % self.account)

    def recv_image_callback(self,image):
        self.image = image


def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = Li4Node()  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭
