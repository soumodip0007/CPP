//Calculate Sum of Digits of a Number using class

#include <iostream>

using namespace std;

class DigitSumCalculator {
    int number;
public:
    DigitSumCalculator(int num) : number(num) {}

    int calculateDigitSum() {
        int sum = 0;
        int temp = number;

        while (temp != 0) {
            sum += temp % 10; // Extract the last digit and add it to the sum
            temp /= 10;       // Remove the last digit
        }

        return sum;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    DigitSumCalculator calculator(num);
    int sum = calculator.calculateDigitSum();

    cout << "Sum of digits of " << num << " is: " << sum << endl;

    return 0;
}

