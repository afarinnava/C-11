////////////////////////////////////////////////////////////////////////////////////////////
//Chapter 12-6. String Search
//Write a program that asks the user for a file name and a string to search for. The
//program should search the file for every occurrence of a specified string. When the
//string is found, the line that contains it should be displayed. After all the occurrences
//have been located, the program should report the number of times the string appeared
//in the file.
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream inputFile;
	string name, line, search;
	
	cout << "\nWhat is the name of the file? ";
	getline(cin, name);
	cout << "\nWhat is the string you are searching for? ";
	getline(cin, search);
	
	inputFile.open(name, ios::in);
	long pos = 0;
	int count = 0;
	
	if(!inputFile)
		cout << "ERROR-- The file doesn't exist!\n";

	else{
		getline(inputFile, line);
		while(inputFile){
			std::size_t found = line.find(search);
			while(true){
				if(found != std::string::npos){
					count++;
					cout << "\n" << line << endl;					
					found = line.find(search, found+search.length());
				}
				else
					break;
			}
			getline(inputFile, line);
		}
		
		cout << "\nThe string \"" << search << "\" was found " << count << " times!";
	}
}

