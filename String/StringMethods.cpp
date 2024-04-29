#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main() {	
	/* string blog;
	cout<<"Write a blog title : ";
	getline(cin, blog);
	cout<<"Blog is about : "<<blog; */
	
	string a = "Hello World!";
	cout<<"Push Back Before : "<<a<<endl;
	a.push_back('o');
	cout<<"Push Back After : "<<a<<endl;
	//a.pop_back();
	//cout<<"Pop Value : "<<a<<endl;
	
	char str[] = "Mario";
	char strTwo[] = "Luigi";
	//String length
	int l = strlen(str);
	cout<<l<<endl; 
	//String reverse
	cout<<strrev(str)<<endl;
	//String copy 
	strcpy(strTwo, str);
	cout<<strTwo<<endl;
	//String concatination
	strcat(str, strTwo);
	cout<<str<<endl;
	//String compare
	int val = strcmp(str, strTwo);
	if(val == 0) {
		cout<<"Equal"<<endl;
	} else {
		cout<<"Not Equal"<<endl;
	}
	//String length
	string b = "Hello";
	cout<<b.length()<<endl;
	//String replace
	b.replace(0,4,"Shaun");
	cout<<b<<endl;
	//String append
	string c = "Hey";
	string d = "There!";
	c.append(d);
	cout<<c<<endl;
	//Algorhitms
	string e = "Hello World!";
	reverse(e.begin(), e.end());
	cout<<e<<endl;
}
