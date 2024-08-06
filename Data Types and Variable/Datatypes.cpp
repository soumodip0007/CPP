#include<iostream>
#include<string>

using namespace std;
main() {
	int a = 10;
	double b = 10.24;
	bool c = false;
	char d = 'a';
	string e = "Mario";
	float f = 10.23;
	
	cout<<a<<ends<<b<<ends<<c<<ends<<d<<ends<<e<<ends<<f<<endl;
	
	cout<<sizeof(int)<<" Bytes"<<endl;
	cout<<sizeof(double)<<" Bytes"<<endl;
	cout<<sizeof(bool)<<" Bytes"<<endl;
	cout<<sizeof(char)<<" Bytes"<<endl;
	cout<<sizeof(string)<<" Bytes"<<endl;
	cout<<sizeof(float)<<" Bytes"<<endl;
}
