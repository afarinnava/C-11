Drink Machine Simulator.cpp
##########################################################

The following program simulates a soft drink machine. 
The program uses a structure that stores the following data:
Drink Name, Drink Cost, Number of Drinks in Machine.

The program creates an array of five structures. The elements are initialized
with the Drink name, cost of each drink and number of eah drink.

Each time the program runs, it enters a loop that performs the following steps:
1- A list of drinks is displayed on the screen. 
2- The user is allowed to either quit the program or pick a drink. 
  If the user selects a drink, they will next enter the amount
  of money that is to be inserted into the drink machine. 
3- The program displays the amount of change that would be returned
  and subtracts one from the number of that drink left in the machine. 
4- If the user selects a drink that has sold out, a message will be displayed. 
5- When the user chooses to quit the program, it displays the total amount of 
   money the machine earned.

Input Validation: When the user enters an amount of money, do not accept negative
values or values greater than $1.00.
