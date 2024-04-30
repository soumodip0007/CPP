#include<iostream>

using namespace std;
main() {
	int number = 18;
	int *ptr = &number; //pointer
	int **pptr=&ptr; //pointer to pointer
	
	cout<<number<<endl; 
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<&number<<endl;
	cout<<&ptr;
	
	cout<<pptr<<endl; //address od pointer
	cout<<*ptr<<endl; //address of number
	cout<<**pptr<<endl; //value of number
	cout<<&pptr; //address of ptr
}
