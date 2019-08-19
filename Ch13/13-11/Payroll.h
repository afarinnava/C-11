#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll{
private:
	double payRate = 15.50;
	int numHours;
	double totalPayWeekly;
public:
	Payroll(){
		numHours = 0;
		totalPayWeekly = 0;
	}
	Payroll(int h){
		numHours = h;
		setTotalPay();
	}
	void setHours(int h){
		numHours = h;
		setTotalPay();
	}
	void setTotalPay(){
		totalPayWeekly = numHours * payRate;
	}
	double getTotalPay()const{
		return totalPayWeekly;
	}
};

#endif