/*
 * PWM.h
 *
 *  Created on: Nov 21, 2016
 *      Author: Taewook Lee
 */

#ifndef PWM_H_
#define PWM_H_

#include<string>

using namespace std;

#define PWM_PATH "/sys/devices/ocp.3/"
#define PWM_PERIOD "period"
#define PWM_DUTY "duty"
#define PWM_POLARITY "polarity"
#define PWM_RUN "run"

namespace BBBone {

class PWM {

	public:

		enum Polarity {high, low};

	private:

		string name, path;

	public:

		PWM(string pinName);
		int SetPolarity (PWM::Polarity polarity);
		int SetPeriod (int period_ns); // Nanoseconds
		int SetDuty (int duty_ns);     // Nanoseconds
		int SetRun();
		int SetStop();
		// ~PWM();
	};

} /* namespace BBBone*/


#endif /* PWM_H_ */
