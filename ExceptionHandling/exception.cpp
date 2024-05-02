#include<iostream>
#include<stdexcept>

using namespace std;
int main() {
	double balance = 20000.00;
	try {
		double amount;
		//Deposit
		cout<<"Enter amount to deposit : "<<endl;
		cin>>amount;
		if(amount<=0) {
			throw invalid_argument("Invalid deposit amount : ");
		} 
		balance = balance + amount;
		cout<<"Available amount : "<<balance<<endl;
		
		//Withdraw
		cout<<"Enter amount to withdraw : "<<endl;
		cin>>amount;
		if(amount <= 0) {
			throw invalid_argument("Invalid withdrawl amount : ");
		}
		if(amount > balance) {
			throw runtime_error("Insufficient balance : ");
		} 
		balance = balance - amount;
		cout<<"Available amount : "<<balance<<endl;
	} catch (exception& e) {
		cout<<e.what();
	}
	return 0;
}
