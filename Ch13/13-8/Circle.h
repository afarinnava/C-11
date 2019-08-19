#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
	double radius;
	double pi = 3.14159;	
public:
	//Constructor
	Circle(){
		radius = 0.0;
	}
	Circle(double r){
		radius = r;
	}
	void setRadius(double r){
		radius = r;
	}
	double getRadius() const{
		return radius;
	}
	double getArea() const{
		return pi * radius * radius;
	}
	double getDiameter() const{
		return radius * 2;
	}
	double getCircumference() const{
		return 2 * pi * radius;
	}
};

#endif