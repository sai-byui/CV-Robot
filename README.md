# The Goal

The goal of this project is to use Object detection with a camera which would be used by a robotic arm to perfrom different tasks in increased compl.exity

## Starting off
We have quite a few things you will need to install to get this all working properly. 
I would reccomend installing VMware onto your computer and putting Ubuntu Linux on it. It works great and you dont have to deal with dual booting linux. After that you can install all the other things oyu need tfor the project on the Linux OS you created through it.

## What is ROS
In my case i have decided that I will use ROS2 for much of the higher level decisions and control that the Robot Operating System can provide. It is an open source middleware suite basically meaning that is provides direction and communication to a connected series of devices. You can find more info here: https://en.wikipedia.org/wiki/Robot_Operating_System

## Getting ROS2 Installed

In order to recreate our project exactly (or closely) you will need to install ROS2 on both your computer and a raspberry pi 4. 

We found the easiest way to get ROS2 working on your home compute is to use Oracle VM box and download a Debian distribution on Linux. You will also need to install a Debian Distribution onto The raspberry pi.

We used this link to get ROS2 installed 
https://docs.ros.org/en/crystal/Installation/Linux-Install-Debians.html

## The Robot
We decided to build our own robot modified from this open source design https://www.thingiverse.com/thing:1454048




## The beginning
So... being a college student whose wife will kill me if I spend more thn 100 bucks on a robot I will need to get creative. Which has its benefits. I plan on following 
a six step process which should help me in the creation of this 100 dollar robot (that I will be using to learn many high level skills i would hope will look favorable for a good internship)
For each of these links it should take you to different aspects of the robot that I plan on working on so you can see how I accomplished them.

1. [ <font size="30"> Robotic Arm Design (DONE)</font>](RAD.md)

Now for these next steps each of these may be very similar or change a lot as I accomplish new tasks on the A.I side of things.

2. [ <font size="30"> Tic-Tac-Toe </font>](https://github.com/sai-byui/CV-Robot/blob/main/tictactoe_bot/tictactoe.md) 

3. [ <font size="30"> Chess </font>](https://github.com/sai-byui/CV-Robot/blob/main/chess_bot/chess.md)   

4. [ <font size="30"> Organizing Blocks and other "higher level concepts" (for me at least) </font>](https://github.com/sai-byui/CV-Robot/blob/main/complexROS_bot/blocks.md) 


 [ <font size="30"> How to Guide</font>](Tutorials/Start.md)

# Planning
My plan with this robot is to take it in steps and to increase my understanding of complex robotics and A.I step by step as I get better with it.
Firstly all three of these plans will use the ROS system but with increased complexity

1. Use the Robot to play Tic-Tac-Toe against a human player. (The task planning for this would be simple because you as the designer know the desired outcome and the steps it needs to do to get there.
2. Use the Robot to play Chess against a Player. This will increase the task planning and decision making by quite a bit while still keeping it within the realm of supervised learning. I have already finished the portion of the A.I regarding to playing chess. The real issue is implementing this physically.
3. Lastly I want to explore the unsupervised realm more by seeing If i can build a robot that trains itself to recognize3 and organize blocks using unsupervised learning techniques.

The current plan is to use Object detection with a camera above to have a robotic arm


## Neural Networks

    - https://www.youtube.com/watch?v=aircAruvnKk&t=2s 

    - LEARN THIS TUTORIAL
        - https://www.tensorflow.org/tutorials/keras/classification
        
## Machine Learning
https://www.sololearn.com/learning/1094


# Things to get
1. Figure out how to do a camera stand
2. zip ties (Cable Management)


# SHORT TERM PLAN
1. Learn ROS in more detail
2. Get a servo to be controlled with solely the ROS and (arduino)
3. Learn machine learning programming
4. Neural network understanding
5. begin to tackle individual parts

**REMINDER**

    THIS IS A MASSIVE PROJECT THAT WE AM ACTIVELY WORKING ON
    please understand that this is a long term project (like potentially upwards of a year)

    I want to use this to fully understand every facet of higher robotic 
    concepts and how to utilize them to create a "smart" robot
# Long term Learning Plan  
Research ideas (aka things to learn while in this process)
### Common Robotic systems
http://manipulation.csail.mit.edu/
notes on an overall process MIT uses to create comp[lex decision makin robotics

ROS or Robotoc Operating system is a big goal of ours for this project. I want to learn how to use it well
http://wiki.ros.org/
        Sub wiki articles good to know about
        http://wiki.ros.org/smach

https://scottlocklin.wordpress.com/2020/07/29/open-problems-in-robotics/
where i created my own steps from this link


### Kinematics
https://en.wikipedia.org/wiki/Robot_kinematics
A good understanding of physics and specifically kinematics and how rigid structures with jointss are affected


This is basically doing the math to say when I move motor n, the system moves in Cartesian (x, y, z) by (i, j, k). 
This applies the other way too, where if you want to move i in x direction, you may need to move multiple motors together.


### MediaPipe?
https://github.com/google/mediapipe


