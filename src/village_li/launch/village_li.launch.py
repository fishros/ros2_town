# 导入库
from launch import LaunchDescription
from launch_ros.actions import Node

# 定义函数名称为：generate_launch_description
def generate_launch_description():


    # 创建Actions.Node对象li_node，标明李四所在位置
    li4_node = Node(
        package="village_li",
        executable="li4_node",
        output='screen',  #四个可选项 
        parameters=[{'write_timer_period': 1}]
        )
    # 创建Actions.Node对象wang2_node，标明王二所在位置
    wang2_node = Node(
        package="village_wang",
        executable="wang2_node",
        parameters=[{'novel_price': 2}]
        )

    # 创建另外一个命名空间下的，创建Actions.Node对象li_node，标明李四所在位置
    li4_node2 = Node(
        package="village_li",
        namespace="mirror_town",
        executable="li4_node",
        parameters=[{'write_timer_period': 2}]
    )
    # 创建另外一个命名空间下的，Actions.Node对象wang2_node，标明王二所在位置
    wang2_node2 = Node(
        package="village_wang",
        namespace="mirror_town",
        executable="wang2_node",
        parameters=[{'novel_price': 1}]
    )

    # 创建LaunchDescription对象launch_description,用于描述launch文件
    launch_description = LaunchDescription([li4_node,wang2_node,wang2_node2,li4_node2])
    # 返回让ROS2根据launch描述执行节点
    return launch_description