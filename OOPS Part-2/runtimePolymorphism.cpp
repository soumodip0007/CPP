#include<iostream>

using namespace std;
class Mario{
	public:
		virtual void show() {
			cout<<"This is runtime polymorphism in class Mario"<<endl;
		}	
};
class Luigi:public Mario {
	public:
		void show() {
			cout<<"This is runtime polymorphism in class Luigi"<<endl;
		}
};
int main() {
	Luigi l;
	l.Mario::show();
	
	Mario *ptr;
	ptr=&l;
	ptr->show();
	return 0;
}
