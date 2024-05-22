//Swap two numbers using class and object 

#include <iostream>

using namespace std;

class NumberSwapper {
    int a, b;
public:
    NumberSwapper(int x, int y) : a(x), b(y) {}

    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x, y;

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    NumberSwapper swapper(x, y);

    cout << "Before swapping:" << endl;
    swapper.display();

    swapper.swap();

    cout << "After swapping:" << endl;
    swapper.display();

    return 0;
}

