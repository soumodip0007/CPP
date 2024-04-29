#include<iostream>

using namespace std;
void display() { //declaration
	for(int i=0; i<5; i++) {
		cout<<i<<endl;
	}
}
void show(string msg, int num) { //parameterized function
	cout<<"Hello Mario"<<msg<<" "<<num<<endl;
}
main() {
	display(); //function calling
	show("Luigi", 100); //passing arguments
}
