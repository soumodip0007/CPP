#include<iostream>

using namespace std;
class Base {
	private:
		int a;
	public:
		void inputBase() {
			cout<<"Enter number for base class : "<<endl;
			cin>>a;
		}
		void showBase() {
			cout<<"Number for base class is : "<<a<<endl;
		}
};
class Derive1:public Base {
	private:
		int b;
	public:
		void inputDerive1() {
			cout<<"Enter number for derive1 class : "<<endl;
			cin>>b;
		}
		void showDerive1() {
			cout<<"Number for derive1 class is : "<<b<<endl;
		}
};
class Derive2:public Base {
	private:
		int c;
	public:
		void inputDerive2() {
			cout<<"Enter number for derive2 class : "<<endl;
			cin>>c;
		}
		void showDerive2() {
			cout<<"Number for derive2 class is : "<<c<<endl;
		}
};
int main() {
	Derive1 d1;
	Derive2 d2;
	
	d1.inputBase();
	d1.showBase();
	
	d2.inputBase();
	d2.showBase();
	
	d1.inputDerive1();
	d1.showDerive1();
	
	d2.inputDerive2();
	d2.showDerive2();
	
	return 0;
}
