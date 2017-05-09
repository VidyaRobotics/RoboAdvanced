/******************************************************************************
    Platform: RoboAdvanced Board Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 09-05-2017

    This application code demonstrates Different Motor Operations such as Forward, Reverse,Left,Right,Stop
    Motors used for This are of BO Motor type
    L293D is used as DC Motor Driver.
    L293D Connections:
    Enable1:Digital Pin 3 Of Arduino
    Input1:Digital Pin 4 Of Arduino
    Input2:Digital Pin 5 Of Arduino
    Enable2:Digital Pin 6 Of Arduino
    Input3:Digital Pin 7 Of Arduino
    Input4:Digital Pin 8 Of Arduino
     
    Hardware Setup:-
    Connect Motors to Board
    Connect Mini USB  cable between PC and Arduino nano.
    Select Controller Board: Arduino Nano
    COMPORT Settings
    Select USBASP programmer type
********************************************************************************/
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  // Forward Direction
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,LOW);
   delay(1000);

   // Left Direction
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(350);

   // Reverse Direction
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(1000);

   // Right Direction
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,HIGH);
   delay(350);


   // Stop
   
   digitalWrite(3,LOW);
   digitalWrite(6,LOW);
   delay(1000);
}
