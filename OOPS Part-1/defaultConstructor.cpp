#include<iostream>

using namespace std;
class Mario {
	public:
	int a;
	//Mario() {
	//	a = 10;
	//}
	void display() {
		cout<<a;
	}
};
int main() {
	Mario m = Mario();
	m.display(); 
	return 0;
}
