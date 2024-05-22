#include<iostream>

using namespace std;
void local() {
	class Mario {
		private:
			int a,b;
		public:
			void add() {
				cout<<"Enter two numbers : ";
				cin>>a>>b;
				int c = a + b;
				cout<<c;
			}
	};
	Mario m;
	m.add();
}
int main() {
	local();
	return 0;
}
