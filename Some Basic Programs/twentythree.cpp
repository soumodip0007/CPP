//Reverse a Number using class

#include <iostream>

using namespace std;

class NumberReverser {
    int number;
public:
    NumberReverser(int num) : number(num) {}

    int reverseNumber() {
        int reversedNumber = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            reversedNumber = reversedNumber * 10 + digit;
            temp /= 10;
        }

        return reversedNumber;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    NumberReverser reverser(num);
    int reversedNum = reverser.reverseNumber();

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}

