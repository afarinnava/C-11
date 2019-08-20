#include <iostream>
#include "CoinTossSimulator.h"

using namespace std;

int main(){
	CoinTossSimulator quarter, dime, nickel;
	srand(time(0));
	double balance = 0.0;
	
	while(balance < 1.00){
		quarter.toss();
		if(quarter.getSideUp() == "heads"){
			balance += 0.25;
		}
		
		dime.toss();
		if(dime.getSideUp() == "heads"){
			balance += 0.10;
		}
		
		nickel.toss();
		if(nickel.getSideUp() == "heads"){
			balance += 0.05;
		}
		if(balance == 1.00){
			cout << "You win!" << endl;
			break;
		}
		else if(balance > 1.00){
			cout << "You lose!" << endl;
			break;
		}
	}
}
