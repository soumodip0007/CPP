#include<iostream>

using namespace std;
template<class T>
void show(T t1, T t2) {
	cout<<"a = "<<t1<<ends<<"b = "<<t2<<endl;
}
int main() {
	int a = 10, b = 20;
	char x = 'A', y = 'B';
	double m = 10.23, n = 23.34;
	show(a, b);
	show(x, y);
	show(m, n);
	return 0;
}
