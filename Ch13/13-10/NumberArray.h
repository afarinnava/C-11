#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray{
private:
	double *arr;
	int length;
public:
	NumberArray(int num){
		arr = new double[num];
		length = num;
	}
	void setNumber(double number, int i){
		arr[i] = number;
	}
	double getNumber(int i) const{
		return arr[i];
	}
	double getHighest()const{
		double max = arr[0];
		for(int i = 1; i < length; i++){
			if(arr[i] > max)
				max = arr[i];
		}
		return max;
	}
	double getLowest()const{
		double min = arr[0];
		for(int i = 1; i < length; i++){
			if(arr[i] < min)
				min = arr[i];
		}
		return min;
	}
	double avg() const{
		double total = 0.0;
		for(int i = 0; i < length; i++)
			total += arr[i];
		return double(total)/length;
	}
	~NumberArray(){
		delete [] arr;
	}
};

#endif