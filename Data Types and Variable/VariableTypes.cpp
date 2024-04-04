#include<iostream>
using namespace std;
int a = 10; //Global
main() {
	int b = 20; //Local
	static int c = 30; //Static
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}
