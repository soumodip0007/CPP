#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are eligible for vote" << endl;
    }
    
    return 0;
}

