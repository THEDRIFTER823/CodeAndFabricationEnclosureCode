#include <Servo.h>
#include "tone.h"
int switchPins[5] = (0, 0, 0, 0, 0);
int servoPins[5] = (0, 0, 0, 0);
const int scene3LEDPin = 
const int scene4LEDPin = 
const int scene5PiezoPin = 

Servo scene1Servo;
Servo scene2Servo;
Servo scene3Servo;
Servo scene4Servo;
Servo servos[4] = (scene1Servo, scene2Servo, scene3Servo, scene4Servo);

bool scene1Complete = false;
bool scene2Complete = false;
bool scene3Complete = false;
bool scene4Complete = false;
bool scene5Complete = false;

int prevState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 5; i++)
  {
    pinMode(switchPin[i], INPUT);
    if (i < 4)
    {
      servos[i].assign(servoPins[i]);
      servos[i].write(0);
    }
  }
  pinMode(scene3LEDPin, OUTPUT);
  pinMode(scene4LEDPin, OUTPUT);
  pinMode(scene5PiezoPin, OUTPUT);
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
  if (digitalRead(switchPins[0]) == HIGH && (digitalRead(switchPins[0]) != prevState))
  {
    servos[0].write(180);
    prevState = 0;
    scene1Complete = true;
  }
  prevState = digitalRead(switchPins[0]);
}

void runScene2()
{
  if (digitalRead(switchPins[1]) == HIGH && (digitalRead(switchPins[1]) != prevState))
  {
    servos[1].write(180);
    prevState = 0;
    scene2Complete = true;
  }
  prevState = digitalRead(switchPins[1]);
}

void runScene3()
{
  if (digitalRead(switchPins[2]) == HIGH && (digitalRead(switchPins[2]) != prevState))
  {
    digitalWrite(scene3LEDPin, HIGH);
    prevState = 0;
    scene3Complete = true;
  }
  prevState = digitalRead(switchPins[2]);
}

void runScene4()
{
  if (digitalRead(switchPins[3]) == HIGH && (digitalRead(switchPins[3]) != prevState))
  {
    digitalWrite(scene4LEDPin, HIGH);
    servos[3].write(180);
    prevState = 0;
    scene4Complete = true;
  }
  prevState = digitalRead(switchPins[3]);
}

void runScene5()
{
  if (digitalRead(switchPins[4]) == HIGH && (digitalRead(switchPins[4]) != prevState))
  {
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_G5);
    Long();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_G5);
    Full();
    pause();
    tone(s, NOTE_G5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_C5);
    Short();
    tone(s, NOTE_D5);
    Long();
    pause();
    pause();
    pause();  
    prevState = 0;
    scene5Complete = true;
  }
  prevState = digitalRead(switchPins[4]);
}
//fjkhkhfkhadfkahfkjdfhsdkjghfaks blahc hi mom
//I ADDED THIS COMMENT 
