/******************************************************************************
    Platform: RoboAdvanced Board Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 29-04-2017

    This application code demonstrates RGB Led color generation with Arduino.
    RGB LED is of Common Cathode Type. 
    Anodes are connected to digital pins of Arduino Controller
    Digital pins A3,A4,A5 are used for RGB color generation 
     
    Hardware Setup:-
    Insert RGB Led on board
    Connect Mini USB  cable between PC and Arduino nano.
    Select Controller Board: Arduino Nano
    COMPORT Settings
    Select USBASP programmer type
********************************************************************************/
void setup() 
{
  // put your setup code here, to run once:
  pinMode(A5,OUTPUT);    //Red 
  pinMode(A4,OUTPUT);    //Green 
  pinMode(A3,OUTPUT);    //Blue 

}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(A3,LOW);
  digitalWrite(A4,LOW);
  digitalWrite(A5,LOW);
  delay(1000);
  // Red Color Generation
  digitalWrite(A3,LOW);
  digitalWrite(A4,LOW);
  digitalWrite(A5,HIGH);
  delay(1000);
  // Green Color Generation
  digitalWrite(A3,LOW);
  digitalWrite(A4,HIGH);
  digitalWrite(A5,LOW);
  delay(1000);
  //Yellow Color Genaration
  digitalWrite(A3,LOW);
  digitalWrite(A4,HIGH);
  digitalWrite(A5,HIGH);
  delay(1000);
  //Blue Color Generation
  digitalWrite(A3,HIGH);
  digitalWrite(A4,LOW);
  digitalWrite(A5,LOW);
  delay(1000);
  // Magenta Color Generation
  digitalWrite(A3,HIGH);
  digitalWrite(A4,LOW);
  digitalWrite(A5,HIGH);
  delay(1000);
  // Cyan Color Generation
  digitalWrite(A3,HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(A5,LOW);
  delay(1000);
  // White Color Generation
  digitalWrite(A3,HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(A5,HIGH);
  delay(1000);

}
