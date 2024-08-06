#include<iostream>

using namespace std;
void changeValue(int num) {
		num++;
		cout<<num<<endl;
	}
main() {
	int num = 10;
	cout<<num<<endl; //10
	changeValue(num);//11
	cout<<num<<endl;//10
}
