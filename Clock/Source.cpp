#include <iostream>
#include "Date.h"
#include "Time.h"
#include "Screen.h"

using namespace std;

int main() {
	Time T;
	Date D;
	Screen S;

	cout << "CLOCK" << endl;
	D.read();
	T.read();
	S.display();
}