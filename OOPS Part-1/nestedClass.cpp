#include<iostream>

using namespace std;
class classOne {
	public:
		class classTwo {
			int a,b,c;
			public:
		    void input() {
		    	cout<<"Enter two numbers : ";
		    	cin>>a>>b;
		    	c = a + b;;
			}
			void display() {
				cout<<c<<endl;
			}
		};
};
int main() {
	classOne::classTwo object;
	object.input();
	object.display();
	return 0;
}
