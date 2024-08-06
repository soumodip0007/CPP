#include<iostream>
#include<fstream>

using namespace std;

main() {
	int value = remove("C:\\Users\\intel\\Desktop\\CPP\\File Handling\\writeFile.txt");
    if(value == 0) {
    	cout<<"File has been successfully deleted!";
	} else {
		cout<<"file not found!";
	}
}
