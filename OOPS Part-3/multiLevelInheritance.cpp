#include<iostream>

using namespace std;
class Base {
	private:
		int a;
	public:
		void inputOne() {
			cout<<"Enter a number "<<endl;
			cin>>a;
		}
		void showOne() {
			cout<<"a = "<<a<<endl;
		}
};
class Derive1:public Base {
	private:
		int b;
	public:
		void inputTwo() {
			cout<<"Enter a number "<<endl;
			cin>>b;
		}
		void showTwo() {
			cout<<"b = "<<b<<endl;
		}
};
class Derive2:public Derive1 {
	private:
		int c;
	public:
		void inputThree() {
			cout<<"Enter a number "<<endl;
			cin>>c;
		}
		void showThree() {
			cout<<"c = "<<c<<endl;
		}
};
int main() {
	Derive2 d2;
	d2.inputOne();
	d2.showOne();
	
	d2.inputTwo();
	d2.showTwo();
	
	d2.inputThree();
	d2.showThree();
	return 0;
}
