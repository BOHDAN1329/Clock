#include "Time.h"
#include <iostream>

using namespace std;

void Time::init(int h, int m, int s)
{
	if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
		setHour(h);
		setMinute(m);
		setSecond(s);
	}
	else {
		cout << "Wrong input!";
	};


}

void Time::read()
{
	 int h, m, s;

	cout << "Hour = "; cin >> h;
	cout << "Minute = "; cin >> m;
	cout << "Second = "; cin >> s;
	init(h, m, s);

}



