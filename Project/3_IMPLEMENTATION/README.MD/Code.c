#include <TinyGPS.h>
#include <SoftwareSerial.h>
SoftwareSerial SIM900(7, 8);
#define trigPin1 3
#define echoPin1 2
#define trigPin2 4
#define echoPin2 5
#define ledPin 7


TinyGPS gps; 


long duration, distance, RightSensor,BackSensor,LeftSensor;

void setup()
{
Serial.begin (9600);
SIM900.begin(9600);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
pinMode(trigPin2, OUTPUT);
pinMode(echoPin2, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop() {
  
      SonarSensor(trigPin1, echoPin1);
      RightSensor = distance;
      SonarSensor(trigPin2, echoPin2);
      LeftSensor = distance;
      
      //Serial.print(LeftSensor);
      //Serial.print(" - ");
      //Serial.println(RightSensor);
      
      if( RightSensor < 200 || LeftSensor < 200) {
        digitalWrite(ledPin, HIGH);
      }
      else {
        digitalWrite(ledPin, LOW);
      }
      
///////////////////////////////////////////////////////////////////////////////////////////
      bool newData = false;
      unsigned long chars;
      unsigned short sentences, failed;
    
      // For one second we parse GPS data and report some key values
      for (unsigned long start = millis(); millis() - start < 1000;)
      {
        while (Serial.available())
        {
          char c = Serial.read();
          //Serial.print(c);
          if (gps.encode(c)) 
            newData = true;  
        }
      }
    
      if (newData)      
      {
        float flat, flon;
        unsigned long age;
        gps.f_get_position(&flat, &flon, &age);   
        SIM900.print("AT+CMGF=1\r"); 
        //delay(400);
        SIM900.println("AT + CMGS = \"+919483659319\"");
        //delay(300);
        SIM900.print("Latitude = ");
        SIM900.print(flat == TinyGPS::GPS_INVALID_F_ANGLE ? 0.0 : flat, 6);
        SIM900.print(" Longitude = ");
        SIM900.print(flon == TinyGPS::GPS_INVALID_F_ANGLE ? 0.0 : flon, 6);
        //delay(200);
        SIM900.println((char)26); 
        //delay(200);
        SIM900.println();
        
    
      }
     
      Serial.println(failed);
     // if (chars == 0)
       // Serial.println("** No characters received from GPS: check wiring **");


}

void SonarSensor(int trigPin,int echoPin)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

}
