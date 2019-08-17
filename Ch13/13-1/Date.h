#ifndef DATE_H
#define DATE_H

class Date{
private:
	int month;
	int day;
	int year;
public:
	Date(int m = 1, int d = 1, int y = 1900){
		month = m;
		day = d;
		year = y;
	}
	
	void printFirst();	//defined in Date.cpp
	void printSecond();	//defined in Date.cpp
	void printThird();	//defined in Date.cpp
	int getMonth() const{
		return month;
	}
	int getDay() const{
		return day;
	}
	int getYear() const{
		return year;
	}
	int setMonth(int m) {
		month = m;
	}
	int setDay(int d){
		day = d;
	}
	int setYear(int y) {
		year = y;
	}
};

#endif
