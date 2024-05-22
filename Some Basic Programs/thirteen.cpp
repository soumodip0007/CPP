//Calculate area of circle using class and object 

#include <iostream>

using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    cout << "Area of the circle: " << circle.calculateArea() << endl;

    return 0;
}

