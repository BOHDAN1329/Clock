#pragma once
#include <iostream>

class Date
{
private:
	int day;
	int month;
	int year;
public:
	int getDay() const { return day; };
	int getMonth() const { return month; };
	int getYear() const { return year; };
	void setDay(int value) { day = value; }
	void setMonth(int value) { month = value; }
	void setYear(int value) { year = value; }

	void init(int d, int m, int s);
	void read();
};

