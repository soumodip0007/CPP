#include<iostream>

using namespace std;
main() {
	int a = 10;
	cout<<a<<endl;
	
	int &ref = a;
	cout<<ref<<endl; //10
	cout<<++ref<<endl; //11
	cout<<a; //11
}
