#include<iostream>
#include<string.h>

using namespace std;
class Mario {
	public:
		void show(int age) {
		cout<<age<<endl;
		}
		void show(string name) {
			cout<<name<<endl;
		}
		void show(double salary) {
			cout<<salary<<endl;
		}
};
int main() {
	Mario m;
	m.show(15);
	m.show("Mario");
	m.show(50000.5);
	return 0;
}
