#include<iostream>

using namespace std;
class Mario {
	private:
	int a,b;
	public:
	Mario(int x, int y) {
		a = x;
		b = y;
	}
	void display() {
		cout<<a<<" "<<b;
	}
};
int main() {
	Mario m(10, 20);
	m.display();
}
