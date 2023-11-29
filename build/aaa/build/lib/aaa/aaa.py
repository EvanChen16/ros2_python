# Usart Library
import serial
import struct
import binascii

# Init serial port
Usart = serial.Serial(
    port='/dev/ttyUSB0',  # 串口
    baudrate=115200,  # 波特率
    timeout=0.001)  # 讀取超時時間
def main():
    # 判断串口是否打开成功
    if Usart.isOpen():
        print("open success")
    else:
        print("open failed")

    # ----读取串口数据-----------------------------------
    try:
        count = Usart.in_waiting  # 获取串口缓冲区数据
        if count > 0:
            # 初始化数据
            Read_buffer = []
            # 接收数据至缓存区
            Read_buffer = Usart.read(40)  # 读取40个字节的数据
    except KeyboardInterrupt:
        if Usart != None:
            print("close serial port")
            Usart.close()
#--------------------------------------------------------
if __name__ == '__main__':
    main()