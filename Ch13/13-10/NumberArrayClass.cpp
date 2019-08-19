#include <iostream>
#include "NumberArray.h"

using namespace std;

int main(){
	NumberArray myArray(3);
	
	myArray.setNumber(15.6,0);
	myArray.setNumber(17,1);
	myArray.setNumber(1.46,2);
	
	cout << "The highest is " << myArray.getHighest() << "\nThe lowest is "
		<< myArray.getLowest() << "\nThe average is " << myArray.avg() << endl;
}
