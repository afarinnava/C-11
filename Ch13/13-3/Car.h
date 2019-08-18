#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car{
private:
	int yearModel;
	string make;
	int speed;
public:
	Car(int yr, string m){
		speed = 0;
		yearModel = yr;
		make = m;
	}
	int getYear() const{
		return yearModel;
	}
	string getMake() const{
		return make;
	}
	int getSpeed() const{
		return speed;
	}
	
	void accelerate(){
		speed += 5;
	}
	void brake(){
		speed -= 5;
	}
};

#endif