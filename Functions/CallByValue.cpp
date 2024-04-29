#include<iostream>

using namespace std;
void changeValue(int num) {
		num++;
		cout<<num<<endl;
	}
main() {
	int num = 10;
	cout<<num<<endl;
	changeValue(num);
	cout<<num<<endl;
}
