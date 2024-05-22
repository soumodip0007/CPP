//Check weather a Number is Palindrome or Not using Class

#include <iostream>

using namespace std;

class PalindromeChecker {
    int number;
public:
    PalindromeChecker(int num) : number(num) {}

    bool isPalindrome() {
        int originalNumber = number;
        int reversedNumber = 0;

        while (originalNumber > 0) {
            int digit = originalNumber % 10;
            reversedNumber = reversedNumber * 10 + digit;
            originalNumber /= 10;
        }

        return reversedNumber == number;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    PalindromeChecker checker(num);

    if (checker.isPalindrome()) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}

