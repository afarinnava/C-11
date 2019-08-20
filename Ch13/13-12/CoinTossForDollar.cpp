/////////////////////////////////////////////////////////////////////////////////////////////
//For this assignment, you will create a game program using the Coin class from
//Programming Challenge 12. The program should have three instances of the Coin
//class: one representing a quarter, one representing a dime, and one representing a nickel.
//When the game begins, your starting balance is $0. During each round of the game,
//the program will toss the simulated coins. When a coin is tossed, the value of the coin
//is added to your balance if it lands heads-up. For example, if the quarter lands headsup,
//25 cents is added to your balance. Nothing is added to your balance for coins that
//land tails-up. The game is over when your balance reaches $1 or more. If your balance
//is exactly $1, you win the game. You lose if your balance exceeds $1.
/////////////////////////////////////////////////////////////////////////////////////////////

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
