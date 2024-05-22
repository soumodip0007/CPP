#include<iostream>
using namespace std;
class Mario {
	    protected:
		int a,b,c;
		public:
		void add() {
			cout<<"Enter two numbers : ";
			cin>>a>>b;
			c = a + b;
		}
		void display() {
			cout<<c<<endl;
		}
};
class Luigi:public Mario {
	public:
	void show() {
			cout<<c<<endl;
		}
};	
int main() {
	Mario m;
	m.add();
	m.display();
	
	Luigi l;
	l.add();
	l.show();
	return 0;
}
