#include<iostream>

using namespace std; 

int fibonacci(int n) {
	if(n == 0 ) {
		return 1;
	}
	if(n == 1) {
		return 1;
	}
	else {
		int fib = fibonacci(n-1) + fibonacci(n-2);
		return fib;
	}
}

main() {
	int n;
	cout<<"Enter a number to calculate the sum of fibonacci series : "<<endl;
	cin>>n;
	cout<<"The sum of the fibonacci series is : "<<fibonacci(n);
}
