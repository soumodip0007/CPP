#include<iostream>

using namespace std;
class Mario {
	public:
		virtual void show() = 0;
		void disp() {
			cout<<"This is base class Mario"<<endl;
		}
};
class Luigi:public Mario {
	public:
		void show() override {
			cout<<"This is derive class Luigi"<<endl;
		}
};
int main() {
	Mario *ptr;
	Luigi l;
	ptr=&l;
	ptr->disp();
	ptr->show();
	return 0;
}
