#include "Time.h"



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
