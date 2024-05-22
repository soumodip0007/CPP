#include<iostream>

using namespace std;
class Mario {
	int a,b;
	public:
	Mario(int x, int y) {
		a=x;
		b=y;
	}
	Mario(Mario &ref) {
		a = ref.a;
		b = ref.b;
	}
	void display() {
		cout<<a<<" "<<b<<endl;
	}
};
int main() {
	Mario m1(10,20);
	Mario m2 = m1;
	m1.display();
	m2.display();
	return 0;
}
