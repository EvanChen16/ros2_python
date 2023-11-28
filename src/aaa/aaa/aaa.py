import serial.tools.list_ports

# 获取可用串口列表
ports = serial.tools.list_ports.comports()

# 打印每个串口的信息
for port, desc, hwid in sorted(ports):
    print(f"串口名: {port}, 描述: {desc}, 硬件标识符: {hwid}")
