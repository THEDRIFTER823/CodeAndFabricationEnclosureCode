#include <Servo.h>
int switchPins[5] = (0, 0, 0, 0, 0);
int servoPins[5] = (0, 0, 0, 0, 0);
const int scene3LEDPin = 
const int scene4LEDPin = 
const int scene5PiezoPin = 

Servo scene1Servo;
Servo scene2Servo;
Servo scene3Servo;
Servo scene4Servo;
Servo servos[5] = (scene1Servo, scene2Servo, scene3Servo, scene4Servo, scene5Servo);

bool scene1Complete = false;
bool scene2Complete = false;
bool scene3Complete = false;
bool scene4Complete = false;
bool scene5Complete = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 5; i++)
  {
    pinMode(switchPin[i], INPUT);
    servos[i].assign(servoPins[i]);
    servos[i].write(0);
  }
  pinMode(scene3LEDPin, OUTPUT);
  pinMode(scene4LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!scene1Complete)
  {
    runScene1();
  }
  else
  {
    if (!scene2Complete)
    {
      runScene2();
    }
    else
    {
      if (!scene3Complete)
      {
        runScene3();
      }
      else
      {
        if (!scene4Complete)
        {
          runScene4();
        }
        else
        {
          if (!scene5Complete)
          {
            runScene5();
          }
        }
      }
    }
  }
}

void runScene1()
{
  if (digitalRead(switchPins[0]) == HIGH)
  {
    servos[0].write(180);
    scene1Complete = true;
  }
}

void runScene2()
{

}

void runScene3()
{

}

void runScene4()
{

}

void runScene5()
{

}
//fjkhkhfkhadfkahfkjdfhsdkjghfaks blahc hi mom