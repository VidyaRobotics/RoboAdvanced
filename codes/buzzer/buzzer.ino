/******************************************************************************
    Platform: RoboAdvanced Board Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 29-04-2017

    This application code demonstrates sound generation using buzzer
    Digital pins 9 is connected to buzzer
     
    Hardware Setup:-
    Connect Mini USB  cable between PC and Arduino nano.
    Select Controller Board: Arduino Nano
    COMPORT Settings
    Select USBASP programmer type
********************************************************************************/
void setup() 
{
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);  //buzzer is connected to pin 9 of arduino nano
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9,HIGH);   //Turn on Buzzer
  delay(500);
  digitalWrite(9,LOW);   //Turn off Buzzer
  delay(500);

}
