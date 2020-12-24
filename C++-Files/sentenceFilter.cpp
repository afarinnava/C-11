//////////////////////////////////////////////////////////////////////////////////////////////
// Chapter 12-7. Sentence Filter
//Write a program that asks the user for two file names. The first file will be opened for
//input and the second file will be opened for output. (It will be assumed that the first file
//contains sentences that end with a period.) The program will read the contents of the first
//file and change all the letters to lowercase except the first letter of each sentence, which
//should be made uppercase. The revised contents should be stored in the second file.
///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream file1, file2;
	string name1, name2;
	char ch;
	
	cout << "\nWhat is the name of the first file? ";
	getline(cin, name1);
	cout << "\nWhat is the name of the second file? ";
	getline(cin, name2);
	
	file1.open(name1, ios::in);
	if(file1){
		file2.open(name2, ios::out);
		if(file2){
			file1.get(ch);
			while(file1){
				while(!isalpha(ch) && file1){
					file2.put(ch);
					file1.get(ch);
				}
				if(!file1)
					break;
				if(isalpha(ch)){
					file2.put(toupper(ch));
					file1.get(ch);
					while(file1 && ch != '.'){
						file2.put(ch);
						file1.get(ch);						
					}
				}
			}
		}
		else{
			cout << "The file " << name2 << " does not exist!";
		}
	}
	else
		cout << "The file " << name1 << " does not exist!";
	
	file1.close();
	file2.close();
}

