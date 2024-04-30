#include<iostream>

using namespace std;
void changeValue(int *p) { //p=address
	*p = *p+10; //*p=20
	cout<<"Pointer Value : "<<*p<<endl;
}
main() {
	int a;
	cout<<"Enter a number : ";
	cin>>a; //a = 10
	cout<<"Real Value : "<<a<<endl; //a=10
	changeValue(&a); //a=address
	cout<<"New Value : "<<a<<endl; //a=20
}
