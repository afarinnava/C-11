# C-11
##################################################################
This is one of the Programming challeges from Gaddis C++ textbook.
Using Dynamically allocated arrays and structs together in order 
to store data of students.
###################################################################
Write a program that uses a structure to store the following data:
Name, Idnum, Tests, Average, Grade
The program should keep a list of test scores for a group of students. It should ask the
user how many test scores there are to be and how many students there are. It should
then dynamically allocate an array of structures. Each structure’s Tests member
should point to a dynamically allocated array that will hold the test scores.
After the arrays have been dynamically allocated, the program should ask for the ID
number and all the test scores for each student. The average test score should be calculated
and stored in the average member of each structure. The course grade should
be computed on the basis of A, B, C, D, F.
The course grade should then be stored in the Grade member of each structure. Once
all this data is calculated, a table should be displayed on the screen listing each student’s
name, ID number, average test score, and course grade.
Input Validation: Be sure all the data for each student is entered. Do not accept negative
numbers for any test score.
