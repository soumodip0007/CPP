#include<iostream>

using namespace std;
class Base {
	//private:
	protected:
		int a,b;
	public:
		void inputOne() {
			cout<<"Enter two numbers "<<endl;
			cin>>a>>b;
		}
		/* void showOne() {
			cout<<"a = "<<a<<", "<<"b = "<<b<<endl;
		} */
};
class Derive:public Base {
	private:
		int x,y;
	public:
		void inputTwo() {
			cout<<"Enter two numbers "<<endl;
			cin>>x>>y;
		}
		void showTwo() {
			cout<<"x = "<<x<<", "<<"y = "<<y<<endl;
			cout<<"a = "<<a<<", "<<"b = "<<b<<endl;
		}
};
int main() {
	Derive d;
	d.inputOne();
	//d.showOne();
	d.inputTwo();
	d.showTwo();
	return 0;
}
