
#include <iostream>
#include <iomanip>

using namespace std;

struct Drink{
	string name;
	double cost;
	int numLeft;
};

int menu();

int main(){
	const int SIZE = 5;
	Drink data[SIZE] = {{"Cola"}, {"Root Beer"}, {"Lemon-Lime"},
						{"Grape Soda"}, {"Cream Soda"}};
	
	double moneyInsert, totalEarn = 0.0;
	
	// initialize the structs in the array
	for(int i = 0; i <3; i++){
		data[i].cost = 0.75;
		data[i].numLeft = 2;
	}
	for(int i = 3; i < SIZE; i++){
		data[i].cost = 0.80;
		data[i].numLeft = 2;
	}
	
	// display menu to the user
	int num;
	do{
		num = menu();
		if(num == 6)
			break;
		
		// prompt the user for the amount that will be inserted
		
		if(data[num -1].numLeft){
			do{
				cout << "Enter the amount you will be inserting: ";
				cin >> moneyInsert;
				cin.ignore();
			}while(moneyInsert < 0 || moneyInsert > 0.99 || 
					moneyInsert < data[num -1].cost);
			
			// print the change on the screen		
			cout << "Your change is $" << fixed << setprecision(2)
				<< moneyInsert - data[num -1].cost << endl;
			
			// subtract one from number of the Drink
			data[num -1].numLeft--;
			
			// add the cost to earnings 
			totalEarn += data[num -1].cost;
		}
		//if the Drink is sold out, print the message
		else{
			cout << "\n\t" << data[num -1].name << " is SOLD OUT! pick another choice.\n\n";
		}
		
		// if all Drinks are sold out, exit
		if(data[0].numLeft == 0 && data[1].numLeft == 0 && data[2].numLeft == 0 &&
				data[3].numLeft == 0 && data[4].numLeft == 0)
			break;
			
	}while(true);
	
	// Display the total earnings of the machine
	cout << "\n\tTotal earnings of this machine is $" << totalEarn << endl;
}

int menu(){
	int choice;
	do{
		cout << "\n\tPick your drink or enter 6 to quit: \n"
			<< "1-Cola $0.75\n"
			<< "2-Root Beer $0.75\n"
			<< "3-Lemon-Lime $0.75\n"
			<< "4-Grape Soda $0.80\n"
			<< "5-Cream Soda $0.80\n"
			<< "6-EXIT\n";
		cin >> choice;
		cin.ignore();
	}while(choice != 1 && choice != 2 && choice != 3 &&
			choice != 4 && choice != 5 && choice != 6);
}

