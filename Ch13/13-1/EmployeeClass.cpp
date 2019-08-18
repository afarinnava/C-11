#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

using namespace std;

int main(){
	Employee emp1, emp2, emp3;
	
	emp1.setName("Susan Meyers");
	emp1.setIdNum(47899);
	emp1.setDepartment("Accounting");
	emp1.setPosition("Vice President");
	
	emp2.setName("Mark Jones");
	emp2.setIdNum(39119);
	emp2.setDepartment("IT");
	emp2.setPosition("Programmer");
	
	emp3.setName("Joy Rogers");
	emp3.setIdNum(81774);
	emp3.setDepartment("Manufacturing");
	emp3.setPosition("Engineer");
	
	//Display data
	cout << left << setw(18) << "Name" << setw(18) << "ID Number" 
		<< setw(18) << "Department" << setw(18) << "Position" << endl;
	cout << "------------------------------------------------------------------------\n";
	cout << left << setw(18) << emp1.getName() << setw(18) << emp1.getIdNumber() 
		<< setw(18) << emp1.getDepartment() << setw(18) << emp1.getPosition() << endl;
	cout << left << setw(18) << emp2.getName() << setw(18) << emp2.getIdNumber() 
		<< setw(18) << emp2.getDepartment() << setw(18) << emp2.getPosition() << endl;
	cout << left << setw(18) << emp3.getName() << setw(18) << emp3.getIdNumber() 
		<< setw(18) << emp3.getDepartment() << setw(18) << emp3.getPosition() << endl;
}
