//Make Calculator using Class

#include <iostream>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    double num1, num2;
    char op;

    cout << "Enter first number, operator, second number: ";
    cin >> num1 >> op >> num2;

    double result;

    switch (op) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

