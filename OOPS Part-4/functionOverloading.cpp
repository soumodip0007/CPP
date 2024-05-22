#include<iostream>
#include <cmath>

using namespace std;
class Mario {
	int x,y;
	public:
		void disp() {
			cout<<"Enter two numbers : ";
			cin>>x>>y;
			int mult = x * y;
			cout<<"Multiplication is : "<<mult<<endl;
		}
		void disp(int a, int b) {
	        if (b != 0) {
	            int div = a / b;
	            cout << "Division is: " << div << endl;
	        } else {
	            cout << "Division by zero error!" << endl;
	        }
        }
	    void disp(int a, double b) {
	        if (b != 0.0) {
	            double mod = fmod(a, b);
	            cout << "Modulus is: " << mod << endl;
	        } else {
	            cout << "Modulus by zero error!" << endl;
	        }
	    }
};
int main() {
	Mario m;
	
	m.disp();
	m.disp(300, 50);
	m.disp(300, 77.56);
	
	return 0;
}
