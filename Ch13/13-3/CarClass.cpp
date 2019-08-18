#include <iostream>
#include "Car.h"

using namespace std;

int main(){
	Car car1(2017, "Toyota");
	
	for(int i = 0; i < 5; i++){
		car1.accelerate();
		cout << "Current speed is: " << car1.getSpeed() << endl;
	}
	cout << endl;
	
	for(int i = 0; i < 5; i++){
		car1.brake();
		cout << "Current speed is: " << car1.getSpeed() << endl;
	}
}

