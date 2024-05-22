//Calculate Factorial of a number using class

#include <iostream>

using namespace std;

class FactorialCalculator {
    int number;
public:
    FactorialCalculator(int num) : number(num) {}

    int calculateFactorial() {
        if (number < 0) {
            return -1; // Factorial of negative numbers is undefined
        }
        if (number == 0 || number == 1) {
            return 1; // Factorial of 0 and 1 is 1
        }
        int factorial = 1;
        for (int i = 2; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    FactorialCalculator calculator(num);
    int result = calculator.calculateFactorial();

    if (result == -1) {
        cout << "Factorial of negative numbers is undefined." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}

