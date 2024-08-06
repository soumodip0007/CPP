#include<iostream>

using namespace std;
class A {
	private:
		int a, b, c;
	public:
		void add() {
			cout<<"Enter two numbers to calculate it's sum : "<<endl;
			cin>>a>>b;
			c = a + b;
			cout<<"The sum is : "<<c<<endl;
		}
		void sub() {
			cout<<"Enter two numbers to calculate it's Subtraction : "<<endl;
			int a, b, c;
			cin>>a>>b;
			c = a - b;
			cout<<"The subtracted output is : "<<c<<endl;
		}
};
class B:public A {
	private:
		int a, b, c;
	public:
		void mult() {
			cout<<"Enter two numbers to calculate it's Multiplication : "<<endl;
			cin>>a>>b;
			c = a * b;
			cout<<"The multiplication is : "<<c<<endl;
		}
		void div() {
			cout<<"Enter two numbers to calculate it's division : "<<endl;
			int a, b, c;
			cin>>a>>b;
			c = a / b;
			cout<<"The division is : "<<c<<endl;
		}
};
class C: public B {
	private:
		int a, b, c;
	public:
		void rem() {
			cout<<"Enter two numbers to calculate it's remainder : "<<endl;
			cin>>a>>b;
			c = a % b;
			cout<<"The remainder is : "<<c<<endl;
		}
};
main() {
    C obj;
	obj.add();	
	obj.sub();
	obj.mult();
	obj.div();
	obj.rem();
}
