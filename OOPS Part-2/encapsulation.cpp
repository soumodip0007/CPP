#include<iostream>

using namespace std;
class Mario {
	private:
		int a;
		void display() {
			cout<<"Luigi"<<endl;
		}
	public:
		string name;
		void setValue(int age) {
			a = age;
			cout<<a<<endl;
			display();
		}
};
int main() {
	Mario m;
	m.setValue(100); 
	m.name = "Mario";
	cout<<m.name<<endl;
	return 0;
}
