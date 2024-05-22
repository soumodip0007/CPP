//Calculate area of square using class and object

#include <iostream>

using namespace std;

class Square {
    double side;
public:
    Square(double s) : side(s) {}

    double calculateArea() {
        return side * side;
    }
};

int main() {
    double sideLength;

    cout << "Enter the side length of the square: ";
    cin >> sideLength;

    Square square(sideLength);

    cout << "Area of the square: " << square.calculateArea() << endl;

    return 0;
}

