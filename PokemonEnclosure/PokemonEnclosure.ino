#include <Servo.h>
#include "tone.h"
int switchPins[5] = {2, 4, 6, 8, 2};
int servoPins[5] = {13, 0, 0, 0};
// const int scene3LEDPin = 
// const int scene4LEDPin = 
const int scene5PiezoPin = 10;
const int scene5PhotoPin = A5;

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
  // for (int i = 0; i < 5; i++)
  // {
  //   pinMode(switchPins[i], INPUT);
  // }
  // pinMode(scene3LEDPin, OUTPUT);
  // pinMode(scene4LEDPin, OUTPUT);
  // pinMode(scene5PiezoPin, OUTPUT);
  pinMode(8, INPUT);
  pinMode(10, OUTPUT);
  scene1Servo.attach(3);
  scene1Servo.write(0);
  scene2Servo.attach(5);
  scene2Servo.write(90);
  scene3Servo.attach(7);
  scene3Servo.write(0);
  scene4Servo.attach(9);
  scene4Servo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(switchPins[2]));
  //Serial.println(analogRead(scene5PhotoPin));
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
    scene1Servo.write(180);
    prevState = 0;
    scene1Complete = true;
  }
  prevState = digitalRead(switchPins[0]);
}

void runScene2()
{
  if (digitalRead(switchPins[1]) == HIGH && (digitalRead(switchPins[1]) != prevState))
  {
    scene2Servo.write(100);
    prevState = 0;
    scene2Complete = true;
  }
  prevState = digitalRead(switchPins[1]);
}

void runScene3()
{
  if (digitalRead(switchPins[2]) == HIGH && (digitalRead(switchPins[2]) != prevState))
  {
    scene2Servo.write(90);
    //digitalWrite(scene3LEDPin, HIGH);
    scene3Servo.write(90);    
    prevState = 0;
    scene3Complete = true;
  }
  prevState = digitalRead(switchPins[2]);
}

void runScene4()
{
  if (digitalRead(switchPins[3]) == HIGH && (digitalRead(switchPins[3]) != prevState))
  {
    //digitalWrite(scene4LEDPin, HIGH);
    scene4Servo.write(100);
    prevState = 0;
    scene4Complete = true;
  }
  prevState = digitalRead(switchPins[3]);
}

void runScene5()
{
  if (analogRead(scene5PhotoPin) > 50)
  {
    scene4Servo.write(90);
    tone(s, NOTE_G4);
    Short();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Long();
    Break();
    tone(s, NOTE_D5);
    Short();  
    tone(s, NOTE_C5);
    Full();
    tone(s, NOTE_A5);
    Short();
    tone(s, NOTE_F4);
    Long();  
    pause();
    tone(s, NOTE_F4);
    Short();
    tone(s, NOTE_D5);
    Full();  
    pause();
    tone(s, NOTE_D5);
    Full();
    pause();
    tone(s, NOTE_C5);
    Short();
    tone(s, NOTE_AS4);
    Short();
    tone(s, NOTE_C5);
    Long();
    Long();  
    pause();
    pause();
    tone(s, NOTE_DS5);
    Full();
    pause();
    tone(s, NOTE_DS5);
    Long();
    pause();
    tone(s, NOTE_DS5);
    Short();
    tone(s, NOTE_D5);
    Full();
    tone(s, NOTE_C5);
    Short();
    tone(s, NOTE_AS5);
    Long();
    pause();
    tone(s, NOTE_AS5);
    Short();
    tone(s, NOTE_D5);
    Full();
    pause();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_C5);
    Full();
    tone(s, NOTE_AS5);
    Short();
    tone(s, NOTE_D5);
    Long();  
    pause();  
    
    tone(s, NOTE_G4);
    Short();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Long();
    Break();
    tone(s, NOTE_D5);
    Short();  
    tone(s, NOTE_C5);
    Full();
    tone(s, NOTE_A5);
    Short();
    tone(s, NOTE_F4);
    Long();  
    pause();
    tone(s, NOTE_F4);
    Short();
    tone(s, NOTE_D5);
    Full();  
    pause();
    tone(s, NOTE_D5);
    Full();
    pause();
    tone(s, NOTE_C5);
    Short();
    tone(s, NOTE_AS4);
    Short();
    tone(s, NOTE_C5);
    Long();
    Long();  
    pause();
    pause();
    tone(s, NOTE_DS5);
    Full();
    pause();
    tone(s, NOTE_DS5);
    Long();
    pause();
    tone(s, NOTE_DS5);
    Short();
    tone(s, NOTE_D5);
    Full();
    tone(s, NOTE_C5);
    Short();
    tone(s, NOTE_AS5);
    Long();
    pause();
    tone(s, NOTE_AS5);
    Short();
    tone(s, NOTE_D5);
    Full();
    pause();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_C5);
    Full();
    tone(s, NOTE_AS5);
    Short();
    tone(s, NOTE_D5);
    Long();  
    pause();  

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

    tone(s, NOTE_G5);
    Short();
    Break();
    tone(s, NOTE_G5);
    Short();
    tone(s, NOTE_A6);
    Short();
    tone(s, NOTE_AS6);
    Short();
    tone(s, NOTE_A6);
    Full();
    tone(s, NOTE_G5);
    Full();
    tone(s, NOTE_G5);
    Full();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_G5);
    Long();
    pause();

    tone(s, NOTE_G5);
    Long();
    pause();
    tone(s, NOTE_G5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_D5);
    Full();
    tone(s, NOTE_C5);
    Long();
    tone(s, NOTE_AS5);
    Full();
    tone(s, NOTE_C5);
    Short();
    tone(s, NOTE_D5);
    Full();
    pause();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_C5);
    Full();
    tone(s, NOTE_AS5);
    Short();
    tone(s, NOTE_D5);
    Long();

    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_G5);
    Full();
    Break();
    tone(s, NOTE_G5);
    Long();
    pause();

    tone(s, NOTE_D5);
    Short();
    Break();
    tone(s, NOTE_D5);
    Short();
    tone(s, NOTE_F5);
    Short();
    tone(s, NOTE_G5);
    Full();  
    tone(s, NOTE_AS6);
    Short();
    tone(s, NOTE_G5);
    Long();
    Long();
    End();
    prevState = 0;
    scene5Complete = true;
  }
  prevState = digitalRead(switchPins[4]);
}