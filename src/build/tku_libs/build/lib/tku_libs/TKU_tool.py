# import rclpy
import logging
# from rclpy.node import Node
# from rclpy import get_package_share_directory
from ament_index_python.packages import get_package_share_directory
from std_msgs.msg import String
from time import time
import os
import sys
import math
import numpy as np
import time


class Tool():
    def __init__(self):
        # super().__init__('TKU_tool')
        self.logger = logging.getLogger(__name__)
        self.logger.setLevel(logging.INFO)
        # logging.basicConfig(level=logging.INFO)
        
        
        self.package_path = ''


    def getPackagePath(self, package_name):
        try:
            self.package_Path = get_package_share_directory(package_name)
            if not self.package_Path:
                return "N"
            return self.package_Path  # 返回包的路径
        except Exception as e:
            self.logger.info(f"packagePath is {str(e)}")
            return "N"
        
    def initParameterPath(self):
        self.stand_path = ""
        self.parameterpath = ""
        self.search = "Desktop/"

        self.loc = self.parameterpath.find(self.search)

        if self.loc != -1:  # 检查是否找到匹配的字符串
            self.src = self.parameterpath
            self.dst = self.stand_path
            self.length = len(self.parameterpath) - len(self.loc) + len(self.search)

            while self.length > 0:
                self.dst += self.src[0]
                self.src = self.src[1:]
                self.length -= 1
            self.dst += '\0'
            self.stand_path += "Standmotion"
        else:
            self.stand_path = "/home/iclab/Desktop/Standmotion"
            # print("parameter_path is", parameter_path)
            # self.logger.info('stand_path is %s', self.stand_path)

    def readvalue(self, fin, title, mode):
        line = bytearray(100)
        equal = ''
        sline = ''
        sbuffer = ''
        if mode == 0:
            while True:
                line = fin.readline()
                sline = line.decode('utf-8').strip()
                
                while sline == '---' or sline == '':
                    line = fin.readline()
                    sline = line.decode('utf-8').strip()
                
                if len(sline) > len(title) and sline.find(title) != -1:
                    sbuffer = sline[sline.find(title):sline.find(title) + len(title)]
                    if ' = ' in sline:
                        if len(sline) > len(title) + 3:
                            sline = sline[len(title) + 3:]
                            return int(sline)
                        else:
                            self.logger.info('read_value() Error!!')
                            self.logger.info('Please check your read file!!')
                            rclpy.shutdown()
                            return None
                    else:
                        self.logger.info('read_value() Error!!')
                        self.logger.info('Please check "=" before and after, must have spaces!!')
                        self.logger.info(sline)
                        rclpy.shutdown()
                        return None
                else:
                    self.get_logger().error('read_value() Error!!')
                    self.get_logger().error('Please check your cpp and ini!!')
                    self.get_logger().info('cpp str name is %s', title)
                    self.get_logger().info('ini str name is %s', sline)
                    rclpy.shutdown()
                    return None
        if mode == 1:
            while True:
                line = fin.readline()
                sline = line.decode('utf-8').strip()
                
                while sline == '---' or sline == '':
                    line = fin.readline()
                    sline = line.decode('utf-8').strip()
                
                if len(sline) > len(title) and sline.find(title) != -1:
                    sbuffer = sline[sline.find(title):sline.find(title) + len(title)]
                    if ' = ' in sline:
                        if len(sline) > len(title) + 3:
                            sline = sline[len(title) + 3:]
                            return float(sline)
                        else:
                            self.get_logger().error('read_value() Error!!')
                            self.get_logger().error('Please check your read file!!')
                            rclpy.shutdown()
                            return None
                    else:
                        self.get_logger().error('read_value() Error!!')
                        self.get_logger().error('Please check "=" before and after, must have spaces!!')
                        self.get_logger().info(sline)
                        rclpy.shutdown()
                        return None
                else:
                    self.get_logger().error('read_value() Error!!')
                    self.get_logger().error('Please check your cpp and ini!!')
                    self.get_logger().info('cpp str name is %s', title)
                    self.get_logger().info('ini str name is %s', sline)
                    rclpy.shutdown()
                    return None
        if mode == 2 or mode == 4:
            fin.getline(line, 100, ' ')
            if line.decode('utf-8') == title:
                equal = fin.read(1)
                if equal == '=':
                    fin.getline(line, 100, '|')
                    return int(line.decode('utf-8'))
            self.get_logger().error('read_value() Error!!')
            self.get_logger().error('Please check your read file!!')
            
            if mode == 2:
                rclpy.shutdown()
            else:
                return -1
        if mode == 3 or mode == 5:
            fin.getline(line, 100, ' ')
            if line.decode('utf-8') == title:
                fin.getline(line, 100, '|')
                return int(line.decode('utf-8'))
            self.get_logger().error('read_value() Error!!')
            self.get_logger().error('Please check your read file!!')
            if mode == 3:
                rclpy.shutdown()
            else:
                return -1   
        
    def Delay(self, timedelay):
        start_time = time.time() * 1000  # 獲得當前時間（毫秒）
        end_time = start_time

        while (end_time - start_time) <= timedelay:
            end_time = time.time() * 1000


class ToolInstance(Tool):
    _instance = None  # 类变量用于保存单例对象

    def __init__(self):
        super().__init__()

    @staticmethod
    def getInstance():
        if ToolInstance._instance is None:
            ToolInstance._instance = ToolInstance()
        return ToolInstance._instance

    @staticmethod
    def deleteInstance():
        if ToolInstance._instance is not None:
            ToolInstance._instance = None  # 释放引用，垃圾收集器将负责清理对象


class TimeClass:
    def __init__(self, check_time_ms=1000.0):
        self.check_time_ms = check_time_ms
        self.start = 0.0
        self.end = 0.0
        self.time_ms = 0.0

    def updateTime(self):
        self.end = time.time()
        self.time_ms = 1000.0 * (self.end - self.start)

    def initialize(self):
        self.start = time.time()
        self.end = self.start
        self.time_ms = 0.0

    def setTimerPass(self, check_time_ms, init_flag=True):
        self.check_time_ms = check_time_ms
        if init_flag:
            self.initialize()

    def getTimeMs(self):
        self.updateTime()
        return self.time_ms

    def checkTimePass(self):
        if self.getTimeMs() > self.check_time_ms:
            return True
        else:
            return False

    def getPeriodTimeMs(self):
        return self.check_time_ms
