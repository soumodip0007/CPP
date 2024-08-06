#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main() {	
		
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
	if(val == 1) {
		cout<<"Equal"<<endl;
	} else {
		cout<<"Not Equal"<<endl;
	}
	//String length
	string b = "Hello";
	cout<<b.length()<<endl;
	//String replace
	b.replace(0,4,"Shau");
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
