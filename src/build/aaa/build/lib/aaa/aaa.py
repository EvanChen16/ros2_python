from tku_libs.TKU_tool import Tool
import sys
import logging
import rclpy
def main():
    rclpy.init()
    # sys.path.append('tku_libs')
    # print(sys.path)
    logging.basicConfig(level=logging.INFO)

    tool = Tool()
    package_path = tool.getPackagePath("tku_libs")
    if package_path =="N":
        print("eeeeeeeeeeeeeeeee")
    else:
        print(f"Package path is {package_path}")
    # rclpy.spin(tool)
    # rclpy.shutdown()
    
    tool.initParameterPath()
    # print('Hi from aaa.')
    # baaa.doSomething()
    # baaa.

if __name__ == '__main__':
    main()
