

#include <Servo.h>

Servo servo1;

int pos = 100;
int button1 = 12;
int button2 = 13;

void setup()
{
  servo1.attach(3);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}
void loop()
{
  if(digitalRead(button1) == HIGH && button2 == LOW)
  {
    for(pos = 100; pos <=180 ; pos +=1) // when button pressed servo will move to 180
    {
      servo1.write(pos);
      delay(15);
    
    }
  }
  if(digitalRead(button2) == HIGH && button1 == LOW) 
  {
    for(pos = 180; pos >=100 ; pos-=1)
    {
      servo1.write(pos);
      delay(15); // before moving back delay for that long
    }
  }
}
