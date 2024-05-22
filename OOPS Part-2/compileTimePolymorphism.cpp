#include<iostream>

using namespace std;
void show(int age) {
	cout<<age<<endl;
}
void show(string name) {
	cout<<name<<endl;
}
void show(double salary) {
	cout<<salary<<endl;
}
int main() {
	show(15);
	show("Mario");
	show(50000.5);
	return 0;
}
