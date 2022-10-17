#pragma once
#include <iostream>
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	int getHour() const { return hour; };
	int getMinute() const { return minute; };
	int getSecond() const { return second; };
	void setHour(int value) { hour = value; }
	void setMinute(int value) { minute = value; }
	void setSecond(int value) { second = value; }

	void init(int h, int m, int s);
	void read();
};

