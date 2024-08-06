#include<iostream> 

using namespace std;
class Mario {
	static int a;
	static int b;
	public:
		Mario(int x, int y) {
			a = x;
			b = y;
		}
		void show() {
			cout<<a<<" "<<b<<endl;
		}
		static void disp() {
			cout<<a<<" "<<b<<endl; //a is not accessible because it is not a static variable
		}
};
int Mario::b = 0;
int Mario::a = 0;
int main() {
	Mario m1(40, 50);
	Mario m2(60, 70);
	
	m1.show();
	m2.show();
	Mario::disp();
	m1.show();
	
	return 0;
}
