#include<iostream>
#include <cmath>

using namespace std;
class Mario {
	public:
		virtual void disp() {
			cout<<"This is class Mario"<<endl;
		}
};
class Luigi: public Mario {
	public:
		void disp() {
			cout<<"This is class Luigi"<<endl;
		}
};
int main() {
	Mario *ptr; Luigi l;
	ptr=&l;
	ptr->disp();
	l.Mario::disp();	
	
	return 0;
}
