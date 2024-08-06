#include<iostream>

using namespace std;
main() {
	int i, j, n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	for(i=1; i<=n; i++) {
		for(j=i; j<n; j++) {
			cout<<" ";
		}
		for(j=1; j<= (2 * i -1); j++) {
			cout<<"*";
		}
		cout<<endl;
	}
}
