#include<iostream>

using namespace std;

main() {
	int n;
	cout<<"Enter size of the array";
	int a[n];
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(int i=0; i<n; ++i) {
	      cin>>a[i];
	}
	for(int i=(n-1); i>=0; --i) {
	      cout<<a[i]<<endl;
	   }
	}

