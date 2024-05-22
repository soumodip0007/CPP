#include<iostream>

using namespace std;
class Base1 {
	private:
		int a,b,c;
	public:
		void inputSum() {
			cout<<"Enter two numbers to calculate addition : "<<endl;
			cin>>a>>b;
		}
		void sum() {
			c = a + b;
			cout<<"Addition is : "<<c<<endl;
		}
};
class Base2 {
	private:
		int a,b,c;
	public:
		void inputSub() {
			cout<<"Enter two numbers to calculate subtraction : "<<endl;
			cin>>a>>b;
		}
		void sub() {
			c = a - b;
			cout<<"Subtraction is : "<<c<<endl;
		}
};
class Derive:public Base1, public Base2 {
	private:
		int a,b,c;
	public:
		void inputMod() {
			cout<<"Enter two numbers to calculate modulus : "<<endl;
			cin>>a>>b;
		}
		void mod() {
			c = a % b;
			cout<<"Modulus is = "<<c<<endl;
		}
};
int main() {
	Derive d;
	
	d.inputSum();
	d.sum();
	d.inputSub();
	d.sub();
	d.inputMod();
	d.mod();
	
	return 0;
}
