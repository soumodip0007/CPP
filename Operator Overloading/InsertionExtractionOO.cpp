#include <iostream>

using namespace std;

class Mario {
	private:
	    double real;
	    double imag;
	
	public:
	    Mario(double r = 0, double i = 0) : real(r), imag(i) {
	
	    }
	
	    // Friend function to overload << operator
	    friend ostream& operator<<(ostream& out, const Mario& c);
	
	    // Friend function to overload >> operator
	    friend istream& operator>>(istream& in, Mario& c);
};

		// Overloading the << operator
		ostream& operator<<(ostream& out, const Mario& c) {
		    out<<c.real<<" + "<<c.imag;
		    return out;
		}
		
		// Overloading the >> operator
		istream& operator>>(istream& in, Mario& c) {
		    cout<<"Enter real part: ";
		    in>>c.real;
		    cout<<"Enter imaginary part: ";
		    in>>c.imag;
		    return in;
		}

int main() {
    Mario c1, c2;

    cout<<"Enter first Mario number:\n";
    cin>>c1;

    cout<<"Enter second Mario number:\n";
    cin>>c2;

    cout<<"First Mario number: "<<c1<<endl;
    cout<<"Second Mario number: "<<c2<<endl;

    return 0;
}
