#include <SoftwareSerial.h>
int pin1=2;
int pin2=3;
int pin3=4;
int pin4=5;
int en1=9;
int en2=10;
char r;
SoftwareSerial mSerail (1,0);
void setup() {
  // put your setup code here, to run once:
 pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  //Start Serial Monitor
  
  Serial.begin(9600);
  mSerail.begin(9600);
}
void moveBackward (){
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(pin1,1);
  digitalWrite(pin4,0);
  digitalWrite(pin3,1);
  digitalWrite(pin2,0);
  Serial.print("back");
 }
 void moveForward(){
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(pin1,1);
  digitalWrite(pin2,0);
  digitalWrite(pin3,0);
  digitalWrite(pin4,1);
  Serial.print("front");
 }
 
  void tunRight(){
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(pin1,0);
  digitalWrite(pin2,1);
  digitalWrite(pin3,1);
  digitalWrite(pin4,0);
  Serial.print("right");
 }
 void turnLeft(){
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(pin4,1);
  digitalWrite(pin1,1);
  digitalWrite(pin2,0);
  digitalWrite(pin3,0);
  Serial.print("left");
 }
  
 void forwardRight(){
  analogWrite(en1,100);
  analogWrite(en2,60);
  digitalWrite(pin1,0);
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);
  digitalWrite(pin4,1);
  }

  void forwardLeft(){
    analogWrite(en1,100);
    analogWrite(en2,60);
  digitalWrite(pin1,0);
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);
  digitalWrite(pin4,1);
    }
  
 void stopNow(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
 }


void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0) {
    r=(Serial.read());
         
          if(r == 'F') {
        moveForward();
        Serial.print("forward");
      } else if(r == 'B') {
        moveBackward();
        Serial.print("backward");
      } else if(r == 'L') {
        turnLeft();
      } else if(r == 'R') {
       tunRight();
      } else if(r == 'S') {
        stopNow();
      }else if(r== 'I'){
        forwardRight();
      }else if(r=='G'){
        forwardLeft();
        }
}
int osos=analogRead(A0);
{moveForward();} 

int sensorValue2=analogRead(A1);
{moveBackward();} 

int sensorValue3=analogRead(A2);
{tunRight();}

int sensorValue4=analogRead(A3);
{turnLeft();}  
}
