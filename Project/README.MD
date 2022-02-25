# Project Tittle: Women-Safety-Device

## Abstract
  In the present scenario women are facing many social challenges and are often victims to violent crimes and abuses. 
    The crimes are committed against women of any age,caste and race. Even today though strict laws are implemented but the crimes against women are still rising.
    Women safety methods like mobile apps have been proposed and implemented but the need of the situation is a device that can be carried by a woman everywhere for her safety.So our purpose is to build a device which is a self-defense system specially designed for women’s to protect themselves.
    Tracking devices using GPS and GSM are already existing but here in our project we have integrated the GPS tracker with the sensor inputs and thereby making the device more efficient and helping the victim in any unfortunate situation.
    
   The device, named as “ Swaraksha ” which means self help is a security based system designed for women in distress. It is a easy to carry and a simple device with multiple functionalities.This device uses a Arduino Uno microcontroller. The device consists of a GPS module using which the location of the victim can be traced. The controller takes the emergency button as its input.Whenever the button is pressed the GSM module activates and sends the exact location to the pre-registered mobile number.In this way the concerned person will know the location and they will be able to save the victim at right time.Along with this an alarming sound is raised which alerts the public surrounding the woman and raises quick help.At times when the victim is not able to press the emergency button and call for help, the combination of sensors like Temperature Sensor,Sound Sensor and Pulse sensor is used as an input to activate the GSM module and to alert the concerned person about the danger.

So through this project our approach is to keep the women secure during vulnerable situations and make them feel courageous.The device shall make the women face any malicious incident without feeling helpless and they can reach out to the concerned people who can quickly help them and thereby making them feel self sufficient and Confident.

## Introduction

## 1.1 Motivation
This project proposes a self-defence device in order to prevent the problems faced by women. The safety and security of a woman can never be at rest as it is a major concern today . The list of crimes against women is quite long-Acid attacks, sexual assault, molestation, marital abuse, all this is becoming very normal in various parts of the country. To help resolve this issue we are implementing a device specially designed for women in distress to allow them to protect themselves. The device basically helps the women to call for a help and intimates instant location to her family member. The device serves as a self help system to protect the women. Hence we have named our device ”Swaraksha” which means self help to build the women’s courage and assist her to face any difficult situations without feeling helpless.

## 1.2 Requirements

## High Level Requirements
        1.To understand the problems faced by the women and to develop a device that can make them feel safe and protected in any situation of discomfort.
        2.Explore different design alternatives and build an efficient project.
        3.Simulate the circuit with all the components integrated together.
        4.Testing the functionality of the device for inputs from switch and sensors.
## Low Level Requirements
        1.Simulate the circuit with all the components integrated together.
        2.Building a proper environment.
        3.Providing proper inputs.
        4.Gathering the equipments
        5.Using a proper IDE.
 
 
#  Block Diagram
![111821423-a7081300-8908-11eb-8988-33681780b564](https://user-images.githubusercontent.com/98874243/155762498-c67518f4-63c4-4327-9a72-caf7a8853647.png)

The block diagram of the device consists of Arduino Uno Microcontroller Board ,GPS Module ,GSM Module, buzzer ,various sensors that includes Temperature sensor, Sound sensor and Pulse sensor.

## Design alternatives
![111821534-c7d06880-8908-11eb-9d42-95fab27e52fd](https://user-images.githubusercontent.com/98874243/155762585-71f03fa9-04cd-476a-abbc-cd47088d0497.png) 

This design includes ARM7 Microcontroller ,GPS ,GSM ,Sensors like Temperature Sensor,Sound Sensor ,relay and Buzzer.

## Final design
![111821593-d9b20b80-8908-11eb-9b8f-f3aa6500cf6b](https://user-images.githubusercontent.com/98874243/155762552-50b9c01b-486b-419d-8d99-cc303b812dc7.png) 

The design includes an Arduino Uno Microcontroller Board ,GPS,GSM,Sensors like Temperature Sensor,Sound Sensor, Pulse sensor and Buzzer.The components are connected to analog and digital pins of Arduino Uno and required ground and power supply connections is provided.
## Flow Chart
![111823353-dc156500-890a-11eb-8b92-ef204d0df083](https://user-images.githubusercontent.com/98874243/155768754-87865da3-77f1-4228-975c-35e3261e2f90.png)

##  Component Specifications
### 1.Arduino Uno
   The Arduino Uno Microcontroller board has 14 digital Input-Output pins , 6 analog InputOutput pins, and it can be programmed using Arduino IDE tool. It is powered using USB cable externally using a 9V battery, it accepts voltages between 7 and 20 volts.

### 2.Emergency switch
   A switch is a gadget used to separate and associate an electric circuit voluntarily and to open and close a circuit.When the switch is pressed it will send signals to the microcontroller,which activates the GPS module and sends coordinates via GSM.
### 3.Regulated Power Supply
The power supplies change over high voltage Alternating current mains power to some reasonable low voltage supply for driving the electronic circuits.
### 4.GPS Module
GPS receiver is a route framework. GPS captures the signs and locates the victim’s position. The standard data format supported by the GPS is NMEA. NMEA stands for the National Marine Electronics Association. 

### 5.GSM modem
A GSM module is a advanced type of modem that has a slot for a SIM card and operates just like a mobile phone. They can be used for receiving and sending SMS and MMS messages. To control these Modem’s AT commands are used . AT is the abbreviation for Attention. Here in our project we have used GSM Sim900A modem which is an easy long range interface with sim slot supporting 2G and 3G networks.It can be easily interfaced with a GPS module to receive and send information.
### 6.Temperature Sensor
LM35 is a Integrated Circuit Temperature sensor as the input varies based on the temperature around it the output voltage also varies. It is a affordable and compact IC that can be used to measure accurate temperature.It has a range from -55°C to 150°C. It can be connected to the Arduino Uno Board.
### 7.Sound Sensor
Sound sensor helps to detect the sound if it exceeds the set threshold value. The sound level threshold is adjusted via an on board potentiometer. When the sound level exceeds a certain threshold the led on the detector is illuminated.
### 8.Pulse Sensor
Pulse Sensor is basically a heart-rate sensor.It can be easily interfaced with Arduino. It has the capability of recording heart rate and heart rate variability. Pulse Sensor adds noise cancellation circuitry and amplification to the hardware. Pulse Sensor works with either a 3V or 5V Arduino power.
## Application in Societal Context
Our project mainly aims to reduce the social challenges and crimes faced by the women in the society. The device we propose shall make the women in the society feel safe and confident to walk alone at any time .The idea is to generate quick help and protect the victim.Therefore it helps to avoid many violent crimes against women. The device uses multiple inputs from the switch as well as the sensors and does not compromise in its task of generating immediate help.The self help device we have designed will build the women’s strength to face the difficult situations with courage and with a hope that somebody will soon be there to reach her and protect her.
