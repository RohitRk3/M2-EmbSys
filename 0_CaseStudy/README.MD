## Case Study1
## High Level Requirements
    1.The In-Cab controller shall not be larger than 6 inches in width, 4 inches in height, and 3 
      inches in depth.
    2.The system shall be compatible with vehicle supplied voltage 12 Volts DC
    3.The system shall not exceed specified current draw
       a.) The In-Cab controller shall not exceed a 15 Amp draw.
       b.) The Air Distribution Box shall not exceed a 30 Amp draw.
    4.The system shall alert the user when desired pressure is reached.
    5.The cost of the prototype system shall not exceed $800.00
  
## Low Level Requirements
    1.The In-Cab controller shall have a backlit display for low light use.
    2.The In-Cab controller shall allow the user to adjust the three output ports individually
    3.The system shall provide safety alerts to the user
    4.The system shall alert the user in the event of possible air compressor failure.
    
## Block Diagrams

      1.System Block Diagram   
![Z_Diagram1](https://user-images.githubusercontent.com/98874243/154839011-8d99326e-1fa7-4571-b60c-12cbdaef6c7d.png)



      2.Subsystem Block Diagrams
![Z_Diagram2](https://user-images.githubusercontent.com/98874243/154839036-31710508-146e-4dd0-9c6d-84599fd63368.png)




      3.Air-Distribution Box Block Diagram
![Z_Diagram3](https://user-images.githubusercontent.com/98874243/154839065-ec8f4992-436e-47df-8257-8e9e4521f098.png)


## Component Details
  ## Main Components
      1.In Cab Controller
      2.Air Distribution Box
      3.Power Supply
## Applications
      Proper tire inflation helps prevent accelerated wear that leads to premature tire replacement and is also important to safety. Tires that are driven under-inflated
      generate excessively high heat levels that can weaken the tire to the point of failure.

        Top 5 Tyre Inflators In India
         1.Bergmann Typhoon Heavy Duty Metal Car Tyre Inflator.
         2.TUSA Digital Tyre Inflator - 12V DC.
         3.iBELL IBL CA12-95 Heavy Duty Tyre Inflator.
         4.Blackcat Micro Tyre Inflator Lilliput.
         5.Michelin 12266 High Power Rapid Tyre Inflator.
     
     
## Case Study 2     
     High Level Requirements
        1.The drone should be able to manage the weight load
        2.All 4 ECU's should be working.
        3.The architecture should be built properly
        4.The material used in the building architecture drone should be light weighted (Ex:acrylic,foamsheet)
        5.Placement of battery will cause major importance in balancing the drone
    
## Low Level Requirements
         1.The battery should be fully charged
         2.All four BDLC motoors should be in working condition
         3.Propellors Should be built properly
         4.Flight controller should be programmed for stability
 ## Block Diagram
 
        Block Diagram
   ![word-image-40](https://user-images.githubusercontent.com/98874243/154840526-f143d301-868b-45de-a9ca-405907b6a4cb.png)
   
      Drone Architecture
   ![Connecting-ESC-to-drone-motors-e1570423276790](https://user-images.githubusercontent.com/98874243/154840643-452e38be-4ed1-4897-9615-f9659650aac8.jpg)

       Drone
![DJI-Mavic-Mini-Drone-Parts](https://user-images.githubusercontent.com/98874243/154840688-3ef5ea0e-a20e-474c-8c52-f9f9273ac1c5.jpg)

## Components
    Drone Motor
       Drones (quadcopters) have two clockwise motors and two counter clockwise motors to equalize the turning force produced by the rotating propellers. This is because of              Newton’s Third Law which states that for every action there is an equal and opposite reaction. So having an equal number of motors counteracting each other provides              stability through equalizing the turning force. This is why on helicopters there is a tail rotor to counteract the turning force from the single main rotor.
     
     Drone Propellers
        As drones (quadcopters) have two counter clockwise motors and clockwise motors, it also has two different propellers, one for each motor direction. Each propeller rotates pushing the air down on the airfoil surface creating an area of lower pressure on top of the propeller and an area of higher pressure below it resulting in a difference of pressure thus pushing the drone up.

    Drone Flight Controller
    This is the brain of the drone. The flight controller takes in inputs from the GPS module, compass, obstacle avoidance sensors, and the remote controller and processes it into information that is given out to the ESCs to control the motors. An example of this is seen when a drone is hovering during windy conditions. In the past or if you have a cheap drone it will just drift around as there are no sensors relaying information about the drone’s location and how to correct for these changes. In this drone however, the drone knows its exact location from the GPS and the downward vision sensors, so even if wind is blowing it will stay in its exact place this is because the flight controller sends the proper instructions to the ESCs and intern the motors to compensate for the wind factor.

    GPS Module
    The global positioning satellite module uses two different global positioning systems to pinpoint the drone’s location. It uses the Russian network known as GLONASS (Globalnaya Navigazionnaya Sputnikovaya Sistema) which is comprised of 24 satellites orbiting Earth. This is used in conjunction with the United States network consisting of 31 satellites. These satellites transmit information about its location to Earth’s surface. These signals travel at the speed of light and are read by the GPS module on the drone. From there, the drone calculates its geolocation based on the amount of time it took for the signals to arrive from the various satellites. These global positioning satellites give the drone the ability to understand where it is on Earth and maintain its position.

     Electronic Speed Controller (ESC)
    The ESCs are connected to the power distribution board (the battery) and the flight controller, as the ESCs receive signals from the flight controller it changes the amount of power given to each of the motors.

     Power Port Module
      This monitors the amount of power coming from the battery and distributes it to the drone’s ESCs and the fight controller.

    Obstacle Avoidance Sensors
    This drone has stereo vision sensors on the front and on the bottom, these sensors work in pairs, just like your eyes. These sensors calculate depth by identifying which image pixels from each sensor correspond to the same point. From this, the drone is able to calculate the distance it is from the object in front of it as the distance between the sensors is constant. In other words, the drone solves the Pythagorean Theorem repeatedly to calculate the distance an object is from the drone.

    3 Axis Gimbal
    This is how drone footage is kept so still and stabilized. A motor is placed on the 3 different axes around the camera. When the sensors detect motion on any of these axes, the motors counteract the motion to cancel it. This happens almost instantly as thousands of calculations are executed to provide smooth footage.

    Drone Camera 
    A lens opens at the front of the camera and light streams in. An imaging sensor captures the incoming light rays and then processes it into a digital image.

      Drone Battery
     These batteries are ‘intelligent’ meaning that they have over-charge protection, temperature data, charge cycle history, and communicate power output to the drone. This is to ensure the battery is safe to use repeatedly and so that there are no problems during flight.

      Drone Antennas
    Inside the legs of the drone is the transmission system which relays information from the drone to the controller and from the controller to the drone. Also, in the legs of this drone is two compass sensors which relay its direction to the flight controller.

    Downward Ultrasonic Obstacle Avoidance Sensor
    One sensor sends out a high-frequency sound pulse and the other sensor receives the pulse. Based on the amount of time between sending the pulse and receiving the pulse the drone calculates the height of the drone off the ground.

    Flight LED
    These flash various colors to show the user what direction the drone is facing. The two flashing red lights show the front of the drone (the direction the camera is facing). The two green flashing lights are the back of the drone.
    
    Joysticks
    These translate the physical movement of the sticks into information that the controller can use to communicate with the drone. The left joystick moves the drone up and down and does pan right and pan left. The right joystick moves the drone forward and backward and does drift right and drift left.

    Main Remote Controller Board
    This receives information from the drone about its location, altitude, and what the camera is seeing. It also takes inputs from the joysticks and sends the commands to the flight controller.

     Main Camera Board
    This processes information from the imaging sensor and gimbal motors to ensure stable footage. This board also processes the camera information and writes the image to the micro SD card.


## Application
      1.Aerial Photography & Videography.
      2.Real estate photography.
      3.Mapping & Surveying.
      4.Asset Inspection.
      5.Payload carrying.
      6.Agriculture.
      7.Bird Control.
      8.Crop spraying.
