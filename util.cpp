/*
 * util.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: Taewook Lee
 */


#include "util.h"
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;


namespace BBBone {


int Setpwm(string path, string obj, int value){
	stringstream s;
	ofstream pathName;
	pathName.open((path + obj).c_str());
	if (!pathName.is_open()){
		perror("Error: Failed to open the path ");
		return -1;
	}

	s << value;
	pathName << s.str();
	pathName.close();
	return 0;
	}

} /* namespace BBBone */
