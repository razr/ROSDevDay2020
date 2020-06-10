# ROSDevDay2020 - How to cross-compile ROS2 distro by taken VxWorks RTOS as an example

Even Open Robotics provides pre-built ROS 2 packages for multiple platforms, very often target software and hardware differ from the default one and a cross-compilation becomes a mandatory step:
* A different from Linux operating system e.g. VxWorks, QNX, eSol, etc. is deployed on the target hardware
* Target hardware (e.g. ARM aarch64) is different from the development host (e.g. Intel x86_64).
* Tuning target software for the footprint and performance (e.g. setting -mcpu=cortex-a72 -mfpu=neon-fp-armv8 when building for Raspberry Pi4).
* Separating ROS2 host tools (e.g. RViz) from the ROS2 target binaries.

This session will explain in detail how to cross-compile ROS2 distro by taken VxWorks RTOS as an example. Step by step instructions will be given of how to setup a cross-compile development environment, build and deploy ROS2 binaries on the target. As a target QEMU ARM will be used on the Desktop PC.
Keywords: ROS2, cross-compilation, VxWorks, QEMU

Author: Andrei Kholodnyi, Principal Technologist, Wind River Systems, Germany, 
