#include<iostream>
// public => 1.Inside class
//              2.Outside class

using namespace std;
class Mario {
	public:
		int a;
		void showOne();
};
void Mario::showOne() {
		a=5;
		cout<<"Outside class "<<a<<endl;
}
int main() {
	Mario m;
	m.showOne();
	m.a=6;
	cout<<"Outside class "<<m.a<<endl;
	return 0;
}
