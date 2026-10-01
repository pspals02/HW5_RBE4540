import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/paige-spalsbury/ros2_ws/src/hover_above/install/hover_above'
