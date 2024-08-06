#include <iostream>

using namespace std;

class Mario {
    private:
        double real;
        double imag;

    public:
        Mario(double r = 0, double i = 0) : real(r), imag(i) {
            
        }

        // Overloading the prefix ++ operator
        Mario& operator++() {
            ++real;
            ++imag;
            return *this;
        }

    // Overloading the postfix ++ operator
    Mario operator++(int) {
        Mario temp = *this;
        ++real;
        ++imag;
        return temp;
    }

    void display() {
        cout<<real<<" + "<<imag<<endl;
    }
};

int main() {
    Mario c1(2.3, 4.5);

    ++c1;
    c1.display();

    c1++;
    c1.display();

    return 0;
}
