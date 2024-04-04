#include<iostream>
using namespace std;
//global section
int b = 20;
main() {
	int a;
	cout << "Enter a number\n";
	cin >> a; //taking input from user
	cout << a;
	
	int b = 100;
	cout <<:: b;
}
