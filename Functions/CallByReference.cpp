#include<iostream>

using namespace std;
main() {
	int a = 10;
	cout<<a<<endl;
	
	int &ref = a;
	cout<<ref<<endl;
	cout<<++ref<<endl;
	cout<<a;
}
