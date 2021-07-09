# Low Level Control (the BEAST OF THIS PROJECT for some reason)

Oh boy... where to even begin. This gave me way more issues than i even thought possible.

Originally I planned on just Using an Arduino Uno to control the servos but as I learned more and more about ROS2 I learned that they do not have a working serial library yet that i could use to send signals to the arduino. Arduino uno also does not connect to ROS2 easily due to it being an exremely resource constrained enviroment and with ROS2 data distro services being quite complex (for an arduino with 1kb memory which isnt enought for me to both cache nodes and keep data sent to it) 

So I thought I would use a Raspberry Pi model 4 with a Linux Image with ROS2 Installed, but that gave me even more problems. I found that the images that would work with an ARM processor on a PI would have Python 3.9 But the newer forms of ROS2 compatible with the PI only has Pthon 3.8 which led me to many compatibility issues. I wanted to use a Virtual Enviroment though to hopefully clear up any issues but I decided to once again retry it because it was getting to complex.
https://www.raspberrypi.org/products/raspberry-pi-4-model-b/

I settled on trying Micro-ROS and Micro-Python on a arduino nano rp2040 which has a Raspberry PI microcontroller chip on it with enough memory to run what i need it to while also being compatible with ROS2 microcontroller code. It also has WIFI which means that I will have the memory neccesary for the data needed in high volume which changes how I was planning on sending the data on the UNO through the transport layer via serial connection. 
https://docs.arduino.cc/hardware/nano-rp2040-connect
https://micro.ros.org/
https://micropython.org/
