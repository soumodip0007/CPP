#include<iostream>
#include<fstream>

using namespace std;

main() {
	ifstream inFile;
	ofstream onFile;
	char value;
	inFile.open("C:\\Users\\intel\\Desktop\\CPP\\File Handling\\writeFile.txt");
	onFile.open("C:\\Users\\intel\\Desktop\\CPP\\File Handling\\copiedFile.txt");
	while(inFile.get(value)) {
		onFile.put(value);
	}
	cout<<"File has been successfully copied!";
	inFile.close();	
	onFile.close();
}
