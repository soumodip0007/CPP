#include<iostream>
using namespace std;
namespace first{
	void disp() {
	cout<<"Hello Mario!\n";
   }
}

namespace second{
	void disp() {
	cout<<"Hello Luigi!";
   }
}
main() {
	first::disp();
	second::disp();
}
