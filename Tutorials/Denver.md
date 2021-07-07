# What is Ros?
Robot Operating System is an open source robotics middleware suite.

ROS is not an operating system but a collection of software frameworks for robot software development.

# Issues with microproccesor servo control
The issue with using my rasberry pi in this project is that the newest forms of pi come with python 3.9 but my ros2 packages run off of python 3.8. 
Now... I could have run it all within a virtual enviroment but that would get messy fast and I decided to go back to the basics.

 But that leads to another issue. 
 
 Arduino uno does not connect to ros easily due to it being an exremely resource constrained enviroment and with ros2 data distro services being quite complex (for an arduino with 1kb) I wouldnt be able to just run the data needed in volume through the transport layer via serial connection. so i decided to get a slightly pricer board with wifi on it (it was like 10 bucks more than my current arduino uno) thos board called the Nano RP2040 offers a microcontroller built from the pi as well as it has the capabilities of using micropython.
