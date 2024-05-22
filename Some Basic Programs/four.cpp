//Check maximum number between two numbers using classes

#include <iostream>

using namespace std;

class MaxFinder {
    int num1, num2;
public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    void printMax() {
        if (num1 > num2) {
            cout << "The maximum number is: " << num1 << endl;
        } else if (num2 > num1) {
            cout << "The maximum number is: " << num2 << endl;
        } else {
            cout << "Both numbers are equal: " << num1 << endl;
        }
    }
};

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    MaxFinder finder(a, b);
    finder.printMax();

    return 0;
}

