/******************************************************************************
    Platform: RoboAdvanced Board Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 06-06-2017

    This application code demonstrates Different Motor Operations using Bluetooth Module and Android App.
    In this program when different buttons of android applications are pressed then it will perform Forward, Reverse,Left,Right,Stop operations.
    Motors used for This are of BO Motor type
    L293D is used as DC Motor Driver.
    
    L293D Connections:
    Enable1:Digital Pin 3 Of Arduino
    Input1:Digital Pin 4 Of Arduino
    Input2:Digital Pin 5 Of Arduino
    Enable2:Digital Pin 6 Of Arduino
    Input3:Digital Pin 7 Of Arduino
    Input4:Digital Pin 8 Of Arduino

    Bluetooth Module Connections:
    Tx pin---- To Digital pin 0 Of Arduino.
    Rx pin---- To Digital pin 1 Of Arduino. 
    
    Hardware Setup:-
    Connect Motors to Board
    Connect Mini USB  cable between PC and Arduino nano.
    Select Controller Board: Arduino Nano
    COMPORT Settings
    Select USBASP programmer type
********************************************************************************/

 
void setup()
{                
  Serial.begin(38400);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
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
  if(Serial.available()>0)  
  {
    int rx=Serial.read();
    
    if(rx=='U')
    {
      forward();
    }
    if(rx=='D')
    {
      backward();
    }
    if(rx=='L')
    {
      left();
      delay(250);
      stp();
    }
    if(rx=='R')
    {
      right();
      delay(250);
      stp();
    }
    if(rx=='C')
    {
      stp();
    }
  }
}

