#include "Time.h"
#include <iostream>
using namespace std;

Time::Time(int hour_in, int min_in)
{
	hour = hour_in;
	min = min_in;
}

void Time:: get(int &rhour, int &rmin) {
	rhour = hour;
	rmin = min;
}

void Time:: set(int hour_in, int min_in) {
	hour = hour_in;
	min = min_in;
}

Time::~Time()
{
}

void Time :: operator++(int min_in) {
	if (min == 59) {
		min = 0;
		if (hour == 23) {		//If time is 23:59 when incremented must go to 00:00
			hour = 0;
		}
		else
			hour += 1;
	}
	else
		min += 1;
}
