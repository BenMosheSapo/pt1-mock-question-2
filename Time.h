#pragma once
class Time
{
private:
		int hour;
		int min;
public:
	Time(int hour_in, int min_in);
	void get(int &rhour, int &rmin);
	void set(int hour_in, int min_in);
	void operator++(int min);
	~Time();
};

