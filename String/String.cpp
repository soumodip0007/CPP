#include<iostream>
#include<string.h>
using namespace std;
main() {
	
	char name[20]; //mutable
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Name is : "<<name<<endl; 
	
	char address[20]; //immutable
	cout<<"Enter your address : ";
	gets(address);
	puts(address);
	
	string blog;
	cout<<"Write a blog title : ";
	cin>>blog;
	cout<<"Blog is about : "<<blog;
}
