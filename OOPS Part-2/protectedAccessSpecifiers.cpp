#include<iostream>
// protected => 1.Mario class
//              2.Luigi class

using namespace std;
class Mario {
	protected:
		int a,b;
		public:
			void showOne() {
				a=4;
				b=5;
				cout<<a<<ends<<b<<endl; 
			}
};
class Luigi:protected Mario {
	public:
		void showTwo() {
			a=6;
			b=7;
			cout<<a<<ends<<b<<endl;
		}
};
int main() {
	Luigi l;
	l.showTwo();
	l.showOne();
	return 0;
}
