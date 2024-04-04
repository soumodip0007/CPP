#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    cout << "Addition - " << (a + b) << endl;
    cout << "Subtraction - " << (a - b) << endl;
    cout << "Multiplication - " << (a * b) << endl;
    
    if (b != 0) {
        cout << "Division - " << (a / b) << endl;
        cout << "Remainder - " << (a % b) << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }

    return 0;
}

