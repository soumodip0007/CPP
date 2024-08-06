#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

main() {
	ifstream inFile;
	string value;
	inFile.open("C:\\Users\\intel\\Desktop\\CPP\\File Handling\\writeFile.txt");
	//inFile>>value;
	while(getline(inFile, value)) {
		cout<<value;
	}
	cout<<value;
	inFile.close();	
}
