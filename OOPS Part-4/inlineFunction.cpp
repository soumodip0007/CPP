#include<iostream>

using namespace std;
inline int myFunc(int a, int b, int c) {
	return (a>b)? ((a>c)?a:c) : ((b>c)?b:c);
}
int main() {
	int result = myFunc(10, 20, 30);
	cout<<result;
	return 0;
}
