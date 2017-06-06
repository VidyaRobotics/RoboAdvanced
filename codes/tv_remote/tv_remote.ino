 
#include <RC5.h>

int IR_PIN = 2;
unsigned long t0;
RC5 rc5(IR_PIN);

void setup() {                
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
void loop() {
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
