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
	cout<<&ptr<<endl;
	
	if(&ptr == pptr) {
		cout<<"ok!"<<endl;
	}
	
	cout<<pptr<<endl; //address of pointer
	cout<<*ptr<<endl; //address of number
	cout<<**pptr<<endl; //value of number
	cout<<&pptr<<endl; //address of ptr
}
