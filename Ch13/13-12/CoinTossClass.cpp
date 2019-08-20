#include <iostream>
#include <string>
#include "CoinTossSimulator.h"

using namespace std;

int main(){
	srand(time(0));
	CoinTossSimulator c;
	int numHeads = 0;
	
	cout << "The side initially up is : " << c.getSideUp() << endl;
	
	for(int i = 0; i < 20; i++){
		c.toss();
		cout << i+1 << "- " << c.getSideUp() << endl;
		if(c.getSideUp() == "heads")
			numHeads++;
	}
	cout << endl;
	
	cout << "Number of heads: " << numHeads << ", Number of tails: "
		<< 20-numHeads << endl;
	
}
