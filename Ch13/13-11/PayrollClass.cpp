#include <iostream>
#include <iomanip>
#include "Payroll.h"

using namespace std;

int main(){
	const int SIZE = 7;
	Payroll arr[SIZE];
	int input;
	
	for(int i = 0; i < SIZE; i++){
		do{
			cout << "Enter number of hours for employee " << i+1 << ": ";
			cin >> input;
			cin.ignore();
		}while(input > 60 || input < 0);
		arr[i].setHours(input);
	}
	cout << fixed << showpoint << setprecision(2);
	for(int i = 0; i < SIZE; i++){
		cout << "Gross pay for employee " << i+1 << "is: $" 
			<< arr[i].getTotalPay() << endl;
	}
}
