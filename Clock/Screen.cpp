#include "Screen.h"
#include <iostream>

using namespace std;

void Screen::display()
{
	cout << "--------------------" << endl;
	cout << "Day : " << B.getDay() << endl;
	cout << "Month : " << B.getMonth() << " " << endl;
	cout << "Year : " << B.getYear() << " "<<endl;
	cout << "--------------------" << endl;

	cout << "--------------------" << endl;
	cout << "Hour : " << A.getHour() << endl;
	cout << "Minute : " << A.getMinute() << endl;
	cout << "Second : " << A.getSecond() << endl;
	cout << "--------------------" << endl;
}
