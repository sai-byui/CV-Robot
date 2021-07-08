# The Goal

The goal of this project is to use Object detection with a camera which would be used by a robotic arm to organize objects by either shape or color into certain areas avalible to it.

## Starting off
We have quite a few things you will need to install to get this all working properly. 

## Getting ROS2 Installed

In order to recreate our project exactly (or closely) you will need to install ROS2 on both your computer and a raspberry pi 4. 

We found the easiest way to get ROS2 working on your home compute is to use Oracle VM box and download a Debian distribution on Linux. You will also need to install a Debian Distribution onto The raspberry pi.

We used this link to get ROS2 installed 
https://docs.ros.org/en/crystal/Installation/Linux-Install-Debians.html

## The Robot
We decided to build our own robot modified from this open source design https://www.thingiverse.com/thing:1454048


## What is ROS
In my case i have decided that I will use ROS2 for much of the higher level decisions and control that the Robot Operating System can provide. It is an open source middleware suite basically meaning that is provides direction and communication to a connected series of devices. You can find more info here: https://en.wikipedia.org/wiki/Robot_Operating_System

## The beginning
So... being a college student whose wife will kill me if I spend more thn 100 bucks on a robot I will need to get creative. Which has its benefits. I plan on following 
a six step process which should help me in the creation of this 100 dollar robot (that I will be using to learn many high level skills i would hope will look favorable for a good internship)
For each of these links it should take you to different aspects of the robot that I plan on working on so you can see how I accomplished them.

1. [ <font size="30"> Robotic Arm Design e</font>](Tutorials/RAD.md)

2. [ <font size="30"> End effector design (how the robot interacts with the world) e</font>](Tutorials/effector.md) 

3. [ <font size="30"> Object recognition </font>](Tutorials/OR.md)   

4. [ <font size="30"> Task Planning </font>](Tutorials/TP.md) 

5. [ <font size="30"> Motion planning </font>](Tutorials/MP.md) 

6.  [ <font size="30"> Low level control </font>](Tutorials/LLC.md) 
