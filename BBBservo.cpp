//============================================================================
// Name        : BBBservo.cpp
// Author      : Taewook Lee
// Version     : rev00
// Copyright   : Your copyright notice
// Description : Control Servo
//============================================================================

#include<iostream>
#include"PWM.h"

using namespace BBBone;
using namespace std;


/* P9_22 MUST be loaded into a slot before executing this code:
 * Type the followings on the Terminal
 * echo bone_pwm_P9_22 > $SLOTS
 * echo am33xx_pwm > $SLOTS
 */

int main(){

	PWM pwm("pwm_test_P9_22.15");   // P9_22 MUST be loaded into a slot before executing the code
	pwm.SetPolarity(PWM::high);     // Use high as active signal
	pwm.SetPeriod(20000000);          // Set the period in nanoseconds e.g. 20ms
	pwm.SetDuty(1400000);				// Set the ducy cycle in nanoseconds e.g. 1.4ms (0.7ms ~ 1.7ms)
	pwm.SetRun();
}
