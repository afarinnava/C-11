//Programming Challenge 13-1
#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;


int main(){
	Date date1(12, 25, 2014);
	
	date1.printFirst();
	date1.printSecond();
	date1.printThird();
	
	int input;
	do{
		cout << "Enter month: ";
		cin >> input;
		cin.ignore();
	}while(input > 12 || input < 1);
	date1.setMonth(input);
	
	do{
		cout << "Enter day: ";
		cin >> input;
		cin.ignore();
	}while(input > 31 || input < 1);
	date1.setDay(input);
	cout << "Enter year: ";
	cin >> input;
	cin.ignore();
	date1.setYear(input);
	
	date1.printFirst();
	date1.printSecond();
	date1.printThird();
}
