#include<iostream>

using namespace std;
class Luigi;
class Mario {
	private:
		int a = 100;
		friend void shaun(Mario, Luigi);
};
class Luigi {
	private:
		int a = 200;
		friend void shaun(Mario, Luigi);
};
void shaun(Mario o1, Luigi o2) {
	cout<<"Sum : "<<o1.a + o2.a;
}
int main() {
	Mario m;
	Luigi l;
	shaun(m,l);
	return 0;
}
