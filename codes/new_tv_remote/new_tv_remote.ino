/******************************************************************************
    Platform: RoboAdvanced Board Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 06-06-2017

    This application code demonstrates Different Motor Operations using TV remote and TSOP1738 sensor.
    In this program when different buttons of TV remote is pressed then it will perform Forward, Reverse,Left,Right,Stop operations.
    Motors used for This are of BO Motor type
    L293D is used as DC Motor Driver.
    L293D Connections:
    Enable1:Digital Pin 3 Of Arduino
    Input1:Digital Pin 4 Of Arduino
    Input2:Digital Pin 5 Of Arduino
    Enable2:Digital Pin 6 Of Arduino
    Input3:Digital Pin 7 Of Arduino
    Input4:Digital Pin 8 Of Arduino

    TSOP1738 Connectionto Arduino: Digital pin 2
     
    Hardware Setup:-
    Connect Motors to Board
    Connect Mini USB  cable between PC and Arduino nano.
    Select Controller Board: Arduino Nano
    COMPORT Settings
    Select USBASP programmer type
********************************************************************************/

 
#include <RC5.h>

int IR_PIN = 2;
unsigned long t0;
RC5 rc5(IR_PIN);

void setup()
{                
  Serial.begin(9600);
  Serial.println("Starting");
  pinMode (6,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
}

void left()

{
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
void right()

{
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}

void forward()

{
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}

void backward
()

{
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
 
 void stp()
 {
   digitalWrite(3,LOW);
   digitalWrite(6,LOW);
 }

 
void loop() 
{
  unsigned char toggle;
  unsigned char address;
  unsigned char command;
  if (rc5.read(&toggle, &address, &command))
  {
    Serial.print("a:");
    Serial.print(address);
    Serial.print(" c:");
    Serial.print(command);
    Serial.print(" t:");
    Serial.println(toggle);
    
    if(command==1)
    {
      forward();
    }
    if(command==2)
    {
      backward();
    }
    if(command==3)
    {
      left();
      delay(250);
      stp();
    }
    if(command==4)
    {
      right();
      delay(250);
      stp();
    }
    if(command==5)
    {
      stp();
    }
  }
}

