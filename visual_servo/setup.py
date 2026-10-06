from setuptools import find_packages, setup

package_name = 'visual_servo'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='artrpelli',
    maintainer_email='aihernandez@wpi.edu',
    description='Visual servoing to rectify error between current and desired frame based on camera input.',
    license='I have a learners permit, I suppose.',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
		'servo_node = visual_servo.servo_node:main',
        ],
    },
)
