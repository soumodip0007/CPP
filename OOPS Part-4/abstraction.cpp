#include<iostream>

using namespace std;
class Car {
	bool startEngine;
	public:
		Car():startEngine(false){
		    
		}
		void start() {
			startEngine=true;
			cout<<"Engine Started"<<endl;
		}
		void drive() {
			if(startEngine) {
				cout<<"Ready to drive..."<<endl;
			} else {
				cout<<"Wear your sit belts"<<endl;
			}
		}
};
int main() {
	Car c;
	c.start();
	c.drive();
	return 0;
}
