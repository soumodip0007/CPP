//Calculate area of rectangle using class and object 

#include <iostream>

using namespace std;

class Rectangle {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }
};

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);

    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}

