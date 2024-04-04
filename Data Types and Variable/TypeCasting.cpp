#include<iostream>
#include<typeinfo>
using namespace std;
main() {
	int a = 10;
	double b = 10.24;
	char c = 'c';
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	cout<<typeid(c).name()<<endl;
	
	//implicit
	double anew = a;
	int bnew = b;
	cout<<anew<<endl;
	cout<<bnew<<endl;
	//explicit
	double a2=(double)a;
	cout<<a2<<endl;
	int b2 =(int)b;
	cout<<b2<<endl;	
}
