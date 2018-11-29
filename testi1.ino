#include "Button.h"

unsigned long previousMillis=0;
const long interval = 2000;

int ledState=LOW;


Button S1(A0);
Button S2(A1);
Button S3(A2);
Button S4(A3);



void setup() {

Serial.begin(9600);

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

}

void start_level000()
{

int a=digitalRead(A0);
int b=digitalRead(A1);
int c=digitalRead(A2);
int d=digitalRead(A3);

int led1=digitalRead(13);
int led2=digitalRead(12);
int led3=digitalRead(11);
int led4=digitalRead(10);

if(a==S1.pressed()){
int x=0;

while(x<=0){
  
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(500);

    x++;   
}
}
else
{ 
    start_level();
}
}




void blinker(){


int data=Serial.read();
  int a=digitalRead(A0);
int b=digitalRead(A1);
int c=digitalRead(A2);
int d=digitalRead(A3);

int led1=digitalRead(13);
int led2=digitalRead(12);
int led3=digitalRead(11);
int led4=digitalRead(10);



if(led1==HIGH && b==S2.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led1==HIGH && c==S3.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led1==HIGH && d==S4.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led2==HIGH && a==S1.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led2==HIGH && c==S3.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led2==HIGH && d==S4.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led3==HIGH && b==S2.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led3==HIGH && a==S1.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led3==HIGH && d==S4.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led4==HIGH && b==S2.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led4==HIGH && c==S3.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}

if(led4==HIGH && a==S1.pressed())
{
  Serial.println("FAIL");
  start_level();
  
}




}







  



  
   void start_level(){

    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);
    delay(400);
    digitalWrite(13,LOW);
    digitalWrite(10,LOW);
    delay(200);
    
    blinker();
   }


void loop() {


       if(S1.pressed()){
  Serial.println("YESSHSHHSHHSHSH");

  if(ledState==HIGH){
    Serial.println("ONNISTUIT!!");
  }
 }
 

 unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(13, ledState);


    
 //blinker();

 }



}
    
