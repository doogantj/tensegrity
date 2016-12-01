/*
 * PWM.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: Taewook Lee
 */


#include"PWM.h"
#include "util.h"
#include <cstdlib>

namespace BBBone {

	PWM::PWM(string pinName) {
		this->name = pinName;
		this->path = PWM_PATH + this->name + "/";
	}

	int PWM::SetPolarity(PWM::Polarity polarity){
		return Setpwm(this->path, PWM_POLARITY, polarity);
	}

	int PWM::SetPeriod(int period_ns){
		return Setpwm(this->path, PWM_PERIOD, period_ns);
	}

	int PWM::SetDuty(int duty_ns){
		return Setpwm(this->path, PWM_DUTY, duty_ns);
	}

	int PWM::SetRun(){
		return Setpwm(this->path, PWM_RUN, 1);
	}

	int PWM::SetStop(){
		return Setpwm(this->path, PWM_RUN, 0);

	}
}/* namespace BBBone */
