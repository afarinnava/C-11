#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee{
private:
	string name;
	int idNumber;
	string department;
	string position;
public:
	//Default constructor
	Employee(){
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
	//constructor
	Employee(string n, int id, string dep, string pos){
		name = n;
		idNumber = id;
		department = dep;
		position = pos;
	}
	//constructor
	Employee(string n, int id){
		name = n;
		idNumber = id;
		department = "";
		position = "";
	}
	//mutator
	void setName(string n) {
		name = n;
	}
	void setIdNum(int id) {
		idNumber = id;
	}
	void setDepartment(string dep) {
		department = dep;
	}
	void setPosition(string pos) {
		position = pos;
	}
	//accessor
	string getName() const{
		return name;
	}
	int getIdNumber() const{
		return idNumber;
	}
	string getDepartment() const{
		return department;
	}
	string getPosition() const{
		return position;
	}
};

#endif
