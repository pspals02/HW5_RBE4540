from glob import glob
from setuptools import find_packages, setup

package_name = 'hover_above'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
     data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob('launch/*.launch.py')),
        ('share/' + package_name + '/config', glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='paige-spalsbury',
    maintainer_email='pspals02@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    
    entry_points={
        'console_scripts': [
            'move_interface = hover_above.ur_move_simple_interface:main',
            'hover = hover_above.hover_func:main',
            'move = hover_above.move_hover:main',
        ],
    },
)
