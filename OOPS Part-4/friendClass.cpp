#include<iostream>

using namespace std;
class Mario {
	int a=100, b=200;
	public:
		void show() {
			cout<<a<<" "<<b<<endl;
		}
		friend class Luigi;
};
class Luigi {
	public:
		void sum(Mario m) {
			int add = m.a + m.b;
			cout<<"Sum is : "<<add;
		}
};
int main() {
	Mario m;
	Luigi l;
	m.show();
	l.sum(m);
	return 0;
}
