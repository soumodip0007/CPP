//Check weather a number is Odd or Even using class 

#include <iostream>

using namespace std;

class NumberChecker {
    int number;
public:
    NumberChecker(int num) : number(num) {}

    void checkOddOrEven() {
        if (number % 2 == 0) {
            cout << number << " is even." << endl;
        } else {
            cout << number << " is odd." << endl;
        }
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    NumberChecker checker(num);
    checker.checkOddOrEven();

    return 0;
}

