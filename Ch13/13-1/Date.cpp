#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

string names[12] = {"January", "February", "March", "April", "May", "June", "July", 
					"August", "September", "October", "November", "December"};

void Date::printFirst(){
	cout << month << "/" << day << "/" << year << endl;
}
void Date::printSecond(){
	cout << names[month-1] << " " << day << ", " << year << endl;
}
void Date::printThird(){
	cout << day << " " << names[month-1] <<   ", " << year << endl;
}
