//////////////////////////////////////////////////////////////////////////////////////////////
// Chapter 12-8. Array/File Functions
//Write a function named arrayToFile . The function should accept three arguments:
//the name of a file, a pointer to an int array, and the size of the array. The function
//should open the specified file in binary mode, write the contents of the array to the file,
//and then close the file.
//Write another function named fileToArray . This function should accept three arguments:
//the name of a file, a pointer to an int array, and the size of the array. The
//function should open the specified file in binary mode, read its contents into the array,
//and then close the file.
//Write a complete program that demonstrates these functions by using the arrayToFile
//function to write an array to a file, and then using the fileToArray function to read
//the data from the same file. After the data are read from the file into the array, display
//the array’s contents on the screen.
//////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using namespace std;

void arrayToFile(string name, int *, int);
void fileToArray(string name, int *, int);

int main(){
	const int SIZE = 10;
	int arr1[SIZE] = {12, 456, 763, 9999, 1331, 0, 3232, 11, 34, 10}, arr2[SIZE];
	int *ptr;
	int *ptr2;
	ptr = arr1;
	ptr2 = arr2;
	
	string name = "tenNumbers.dat";
	
	arrayToFile(name, ptr, SIZE);
	fileToArray(name, ptr2, SIZE);
	
	for(auto c: arr2)
		cout << c << " ";
	cout << endl;
}

void arrayToFile(string name, int *numbers, int size){
	fstream outputFile;
	outputFile.open(name, ios::out | ios::binary);
	if(outputFile){
		for(int i = 0; i < size; i++){			
			outputFile.write(reinterpret_cast<char *>(numbers), sizeof(*numbers));
			numbers++;
		}		
		outputFile.close();
	}	
	else
		cout << "\nERROR-- The file does not exits.";
}

void fileToArray(string name, int *numbers, int size){
	fstream inputFile;
	inputFile.open(name, ios::in | ios::binary);
	if(inputFile){
		for(int i = 0; i < size; i++){			
			inputFile.read(reinterpret_cast<char *>(numbers), sizeof(*numbers));
			numbers++;
		}		
		inputFile.close();
	}	
	else
		cout << "\nERROR-- The file does not exits.";
}
