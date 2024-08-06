#include<iostream>
#include<fstream>

using namespace std;

main() {
	ofstream onFile;
	onFile.open("C:\\Users\\intel\\Desktop\\CPP\\File Handling\\newFile.txt");
	cout<<"File has been successfully created!";
	onFile.close();	
}
