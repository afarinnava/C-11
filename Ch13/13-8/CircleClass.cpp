#include <iostream>
#include "Circle.h"

using namespace std;

int main(){
	Circle myCircle;
	double input;
	
	cout << "Enter the radius: ";
	cin >> input;
	myCircle.setRadius(input);
	
	cout << "For the circle with radius " << myCircle.getRadius() << "\n"
		<< "Area is " << myCircle.getArea() << ", Diameter is " 
		<< myCircle.getDiameter() << ", Circumference is " << myCircle.getCircumference() << endl;
}
