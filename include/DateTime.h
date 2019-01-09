#pragma once

#include<iostream>
#include<ctime>
#include<string>

class DateTime
{
public:
	std::string construct_str(time_t tmp);
	DateTime();
	DateTime(int day,int month,int year);
	std::string getToday();
	std::string getTomorrow();
	std::string getYesterday();
	std::string getPast(unsigned int N);
	std::string getFuture(unsigned int N);
	int getDifference(DateTime &dt);
private:
	time_t _Time;
};