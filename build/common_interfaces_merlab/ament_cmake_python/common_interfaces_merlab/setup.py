from setuptools import find_packages
from setuptools import setup

setup(
    name='common_interfaces_merlab',
    version='0.0.0',
    packages=find_packages(
        include=('common_interfaces_merlab', 'common_interfaces_merlab.*')),
)
