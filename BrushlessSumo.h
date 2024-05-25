
#pragma once


#include "Constants.h"
#include "ESCMotor.h"
#include <Servo.h>


class BrushlessSumo
{
    public:
       

        BrushlessSumo();
        void setup();
        void forward(int, int);
        void reverse(int, int);
        void left(int, int);
        void right(int, int);
        void stop();
        void coast();

        boolean IsDIP1On();
        boolean IsDIP2On();
        boolean IsDIP3On();
       
        boolean IsStarted();

        boolean IsOnFrontRightLight();
        boolean IsOnFrontLeftLight();

        boolean IsFarLeftDist();
        boolean IsMidLeftDist();
        boolean IsFrontLeftDist();
       

        
        boolean IsFarRightDist();
        boolean IsMidRightDist();
        boolean IsFrontRightDist();
       
        

        void WaitForStart();

        
        void FanOn(int);
        void FanOff();
        
        

    private:
     
        ESCMotor _leftMotor = ESCMotor(DC11); //correc
        ESCMotor _rightMotor = ESCMotor(DC4); //correct
        Servo _fanMotor;// = Servo(AC3); //correct
       
        
};
