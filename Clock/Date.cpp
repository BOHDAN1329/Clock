#include "Date.h"
#include <iostream>

using namespace std;
void Date::init(int d, int m, int y)
{
	if (d > 0 && d <= 31 && m > 0 && m <= 12 && y > 0 ) {
		setDay(d);
		setMonth(m);
		setYear(y);
	}
	else {
		cout << "Wrong input!";
	};


}

void Date::read()
{
	int d, m, y;

	cout << "Day = "; cin >> d;
	cout << "Month = "; cin >> m;
	cout << "Year = "; cin >> y;
    init(d, m, y);

}

