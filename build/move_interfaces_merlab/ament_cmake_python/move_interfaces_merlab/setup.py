from setuptools import find_packages
from setuptools import setup

setup(
    name='move_interfaces_merlab',
    version='0.0.0',
    packages=find_packages(
        include=('move_interfaces_merlab', 'move_interfaces_merlab.*')),
)
