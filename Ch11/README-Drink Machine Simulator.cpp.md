Drink Machine Simulator.cpp<br />
##########################################################<br />

The following program simulates a soft drink machine. <br />
The program uses a structure that stores the following data:<br />
* Drink Name 
* Drink Cost 
* Number of Drinks in Machine <br />

The program creates an array of five structures. The elements are initialized<br />
with the Drink name, cost of each drink and number of eah drink.<br />
<br />
Each time the program runs, it enters a loop that performs the following steps:<br />
1. A list of drinks is displayed on the screen. 
1. The user is allowed to either quit the program or pick a drink. <br />
  If the user selects a drink, they will next enter the amount<br />
  of money that is to be inserted into the drink machine. <br />
1. The program displays the amount of change that would be returned<br />
  and subtracts one from the number of that drink left in the machine. <br />
1. If the user selects a drink that has sold out, a message will be displayed. 
1. When the user chooses to quit the program, it displays the total amount of <br />
   money the machine earned.<br />
<br />
Input Validation: When the user enters an amount of money, do not accept negative<br />
values or values greater than $1.00.<br />
