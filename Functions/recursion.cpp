#include<iostream>

using namespace std;
int factorial(int num) {
	if(num==0) {
		return 1;
	} else {
		return num*factorial(num-1); //function calling itself
	}
}
main() {
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	int n = factorial(num);
	cout<<"Factorial of "<<num<<" is "<<n;
}
