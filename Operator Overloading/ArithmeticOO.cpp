#include <iostream>
using namespace std;

class Mario {
    private:
        double real;
        double imag;

    public:
        Mario(double r, double i) : real(r), imag(i) {

        }

        // Overloading + operator to add two Mario objects
        Mario operator+(Mario& other) {
            return Mario(real + other.real, imag + other.imag);
        }

        // Method to display Mario number
        void display() {
            cout <<real<<" + "<<imag<< endl;
        }
};

int main() {
    Mario c1(2.3, 4.5);
    Mario c2(3.4, 5.6);

    Mario sum = c1 + c2;

    cout <<"Sum of ";
    c1.display();
    cout <<"and ";
    c2.display();
    cout <<"is ";
    sum.display();

    return 0;
}
