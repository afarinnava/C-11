#ifndef COINTOSSSIMULATOR_H
#define COINTOSSSIMULATOR_H

#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class CoinTossSimulator{
private:
	string sideUp;
public:
	CoinTossSimulator(){
		//srand(time(0));
		if(rand() % 2)
			sideUp = "heads";
		else
			sideUp = "tails";
	}
	void toss(){
		//srand(time(0));
		if(rand() % 2)
			sideUp = "heads";
		else
			sideUp = "tails";
	}
	string getSideUp() const{
		return sideUp;
	}	
};

#endif