#include<iostream>
using namespace std;

main() {
	for(int i=1; i<=10; ++i) {
		if(i==5) {
			goto out;
		}
		cout<<i<<endl;
	}
	cout<<"Terminated";
	out:
		cout<<"Goto statement";
}
