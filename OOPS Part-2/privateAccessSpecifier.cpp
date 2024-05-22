#include<iostream>
// private => 1.member of class
//            2.friend

using namespace std;
class Mario {
	private:
		int a,b;
	public:
		void showOne() {
			a=4; 
			b=5;
			cout<<a<<ends<<b<<endl;
		}
		friend class Luigi;
};
class Luigi {
	public: 
		void showTwo(Mario ref) {
			ref.a = 6; 
			ref.b = 7;
			cout<<ref.a<<ends<<ref.b;
		}
};
int main() {
	Mario m;
	Luigi l;
	m.showOne();
	l.showTwo(m);
	return 0;
}
