#include<iostream>

using namespace std;
union DifferentData{
	int numOne;
	double numTwo;
	char ch;
};
int main() {
	union DifferentData D;
	cout<<sizeof(D)<<endl;
	D.numOne=1234567;
	cout<<D.numOne<<endl;
	D.numTwo=12.1232;
	cout<<D.numTwo<<endl;
	D.ch='A';
	cout<<D.ch<<endl;
}
