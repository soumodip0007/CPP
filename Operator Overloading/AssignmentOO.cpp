#include <iostream>

using namespace std;

class Mario {
    private:
        double real;
        double imag;

    public:
        Mario(double r = 0, double i = 0) : real(r), imag(i) {

        }

        // Overloading the = operator
        Mario& operator=(const Mario& other) {
            if (this != &other) {
                real = other.real;
                imag = other.imag;
            }
            return *this;
        }

    void display() const {
        cout<<real<<" + "<<imag<<endl;
    }
};

int main() {
    Mario c1(2.3, 4.5);
    Mario c2;

    c2 = c1;  // Calls the overloaded = operator

    cout<<"c1: ";
    c1.display();

    cout<<"c2: ";
    c2.display();

    return 0;
}
