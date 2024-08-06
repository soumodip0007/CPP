#include<iostream>

using namespace std;
class Mario {
	public:
		int a;
		void input() {
			cout<<"The value is : "<<a;
		}
		Mario() {
			cout<<"Enter a number : "<<endl;
			cin>>a;
		}
	};
	
main() {
	Mario obj;
	obj.input();
}

