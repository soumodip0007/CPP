#include<iostream>

using namespace std;

void main() {
	int a[5];
	cout<<"Enter Array Elements : ";
	for(int i=0; i<5; ++i) {
	      cin>>a[i];	
	   }
	for(int i=4; i>=0; --i) {
	      cout<<a[i]<<endl;	
	   }
	}

