#include <iostream>

using namespace std;

class Mario {
private:
    double real;
    double imag;

public:
    Mario(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the == operator
    bool operator==(Mario& other) {
        return (real == other.real) && (imag == other.imag);
    }

    // Overloading the != operator
    bool operator!=(Mario& other) {
        return !(*this == other);
    }

    void display() {
        cout<<real<<" + "<<imag<<endl;
    }
};

int main() {
    Mario c1(2.3, 4.5);
    Mario c2(2.3, 4.5);
    Mario c3(1.1, 2.2);

    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    if (c1 != c3) {
        cout << "c1 is not equal to c3" << endl;
    } else {
        cout << "c1 is equal to c3" << endl;
    }

    return 0;
}
