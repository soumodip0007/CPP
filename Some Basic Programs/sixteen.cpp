//Find area of triangle using class and object

#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() {
        return 0.5 * base * height;
    }
};

int main() {
    double base, height;

    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    Triangle triangle(base, height);

    cout << "Area of the triangle: " << triangle.calculateArea() << endl;

    return 0;
}

