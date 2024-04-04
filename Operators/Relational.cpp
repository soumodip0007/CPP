#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    cout << "true/false - " << (a < b) << endl;
    cout << "true/false - " << (a > b) << endl;
    cout << "true/false - " << (a <= b) << endl;
    cout << "true/false - " << (a >= b) << endl;
    cout << "true/false - " << (a == b) << endl;
    cout << "true/false - " << (a != b) << endl;

    return 0;
}

