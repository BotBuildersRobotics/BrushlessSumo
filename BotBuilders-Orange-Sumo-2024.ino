#include <Arduino.h>
#include "BrushlessSumo.h"

BrushlessSumo sumo = BrushlessSumo();

boolean runForward = true;

//create some functions that can be used on first pass
void Strat1(){

  
}


void Strat2(){
  
}

void setup() {

  //Uncomment when debugging.
  Serial.begin(115200);
  
 
 sumo.setup();

 sumo.stop();
 delay(2800); // delay to ensure the ESC is ready!

 sumo.forward(80, 80);
 delay(1550);
 sumo.stop();
 
 //What is our first move strat?

 //if(sumo.IsDIP1On()){
 //  if(!sumo.IsDIP2On()){
 //   if(!sumo.IsDIP3On()){
 //     sumo.forwa  rd(30, 30);
 //   }
 //  }
 //}

 sumo.FanOn(100);
 delay(500);
 sumo.FanOff();

}

void loop() {

Serial.print("Far Left: ");
Serial.println(sumo.IsFarLeftDist());

Serial.print("Mid Left: ");
Serial.println(sumo.IsMidLeftDist());

Serial.print("Front Left: ");
Serial.println(sumo.IsFrontLeftDist());


Serial.print("Far Right: ");
Serial.println(sumo.IsFarRightDist());

Serial.print("Mid Right: ");
Serial.println(sumo.IsMidRightDist());

Serial.print("Front Right: ");
Serial.println(sumo.IsFrontRightDist());

Serial.print("Front Right Light: ");
Serial.println(sumo.IsOnFrontRightLight());

Serial.print("Front Left Light: ");
Serial.println(sumo.IsOnFrontLeftLight());

Serial.print("Right Sensor");
Serial.println(analogRead(AC2));

Serial.print("LEFT Sensor");
Serial.println(analogRead(AC4));


delay(250);


}
