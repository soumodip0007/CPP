#include<iostream>
#include<fstream>

using namespace std;

main() {
	ofstream onFile;
	onFile.open("C:\\Users\\intel\\Desktop\\CPP\\File Handling\\writeFile.txt");
	onFile<<"Hello Mario!";
	cout<<"File has been successfully written";
	onFile.close();	
}
