/*
 * created by Rui Santos, https://randomnerdtutorials.com
 * 
 * Complete Guide for Ultrasonic Sensor HC-SR04
 *
    Ultrasonic sensor Pins:
        VCC: +5VDC
        Trig : Trigger (INPUT) - Pin11
        Echo: Echo (OUTPUT) - Pin 12
        GND: GND
 */

//jewel's edit

#include <Servo.h> 

Servo myservo;
 
int trigPin = 9;    // Trigger
int echoPin = 10;    // Echo
long duration, cm, inches;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(8);
}
 
void loop() {
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  Serial.print("here ");

//     if (inches <= 1) 
//   {
// //    myservo.attach(8);
//     myservo.write(1);
// //    delay(10);
// //    myservo.detach();
    
// //    myservo.attach(8);
// //    delay(15);
// //    myservo.write(179);    
// //    delay(10);
// //    myservo.detach(); 
// //    delay(10);

//   Serial.print(inches);
//   Serial.print("in, ");
//   Serial.print(cm);
//   Serial.print("cm");
//   Serial.println();
//   }
//   if (inches <= 2) 
//   {
//     myservo.attach(8);
//     myservo.write(1);
//     delay(700);
//     myservo.detach();
//     myservo.attach(8);
// //    delay(15);
//     myservo.write(179);    
//     delay(700);
//     myservo.detach(); 
//     delay(700);

//   Serial.print(inches);
//   Serial.print("in, ");
//   Serial.print(cm);
//   Serial.print("cm");
//   Serial.println();
//   }
//   else if (inches <= 5) 
//   {
//     myservo.attach(8);
//     myservo.write(1);
//     delay(1000);
//     myservo.detach();
//     myservo.attach(8);
//     delay(15);
//     myservo.write(179);    
//     delay(1000);
//     myservo.detach(); 
//     delay(1000);

//   Serial.print(inches);
//   Serial.print("in, ");
//   Serial.print(cm);
//   Serial.print("cm");
//   Serial.println();
//   }

  else if (inches <= 5) 
  {
    myservo.attach(8);
    myservo.write(1);
    delay(1000);
    myservo.detach();
    myservo.attach(8);
    delay(15);
    myservo.write(179);    
    delay(1000);
    myservo.detach(); 
    delay(1000);

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  }
//  else 
//  {
//    myservo.attach(9);
//    delay(1000);
//    myservo.write(1);
//    delay(1000);
//    myservo.detach(); 
//    delay(1000);
//    myservo.write(179);
//    delay(1000);     
//    myservo.detach();
//    delay(1000);
//  }
  
//  Serial.print(inches);
//  Serial.print("in, ");
//  Serial.print(cm);
//  Serial.print("cm");
//  Serial.println();
  
  delay(1);
}
