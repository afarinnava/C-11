#include <iostream>
#include <iomanip>

using namespace std;

struct Student{
	string name;
	string idNum;
	double *ptrTests;
	double average;
	char grade;
};

void getData(Student *ptrS, int s, int t);
double calcAvg(double *ptr, int t);
char calcGrade(double avg);
void displayData(Student *ptr, int s);

int main(){
	int numTests, numStudents;
	
	
	cout << "How many test scores does each student have for this course?";
	cin >> numTests;
	cin.ignore();
	//ptr = new double[numTests];
	
	cout << "How many students do you have?";
	cin >> numStudents;
	cin.ignore();
	Student * ptrS = nullptr;
	ptrS = new Student[numStudents];
	
	getData(ptrS, numStudents, numTests);
	displayData(ptrS, numStudents);
	
}

void getData(Student *ptrS, int s, int t){
	double total = 0.0;
	//double * ptrTests;
	cout << "\nEnter data for each student:\n\n";
	for(int i = 0; i < s; i++){
		cout << "\n\tStudent #" << i+1 << ": \n\n";
		do{
			cout << "Name: ";
			getline(cin,ptrS[i].name);
		}while(ptrS[i].name == "");
		do{
			cout << "ID Number: ";
			getline(cin,ptrS[i].idNum);
		}while(ptrS[i].idNum == "");
		//Dynamically allocate an array for test scores
		ptrS[i].ptrTests = new double[t];
		
		for(int j = 0; j < t; j++){
			do{
				cout << "Enter test score #" << j+1 << ": ";
				cin >> ptrS[i].ptrTests[j];
				cin.ignore();
			}while(ptrS[i].ptrTests[j] < 0);
		}
		ptrS[i].average = calcAvg(ptrS[i].ptrTests, t);
		ptrS[i].grade = calcGrade(ptrS[i].average);
	}
}

double calcAvg(double *ptr, int t){
	double total = 0.0;
	for(int i = 0; i < t; i++){
		total += ptr[i];
	}
	return double(total)/t;
}

char calcGrade(double avg){
	if(avg >= 89.99)
		return 'A';
	else if(avg >= 79.99)
		return 'B';
	else if(avg >= 69.99)
		return 'C';
	else if(avg >= 59.99)
		return 'D';
	else
		return 'F';
}

void displayData(Student *ptr, int s){
	cout << fixed << setprecision(1);
	cout << "\n\n\tHere is the REPORT: \n\n";
	cout << "  " << left << setw(15) << "Name" << setw(15) << "Id Number" << setw(10) 
		<< "Average" << setw(5) << "Grade\n";
		
	cout << "----------------------------------------------\n";
	for(int i = 0; i < s; i++){
		cout << "  " << left << setw(15) << ptr[i].name << setw(15) << ptr[i].idNum << setw(10) 
			<< ptr[i].average << setw(5) << ptr[i].grade << endl;
	}
	cout << endl;
}


