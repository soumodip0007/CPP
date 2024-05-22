//Check Armstrong Number or Not using Class

#include <iostream>
#include <cmath>

using namespace std;

class ArmstrongChecker {
    int number;
public:
    ArmstrongChecker(int num) : number(num) {}

    bool isArmstrong() {
        int sum = 0;
        int temp = number;
        int numDigits = int(log10(number)) + 1;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        return sum == number;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    ArmstrongChecker checker(num);

    if (checker.isArmstrong()) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

