//Check Perfect Number or Not using Class

#include <iostream>

using namespace std;

class PerfectNumberChecker {
    int number;
public:
    PerfectNumberChecker(int num) : number(num) {}

    bool isPerfectNumber() {
        int sum = 0;
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) {
                sum += i;
            }
        }
        return sum == number;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    PerfectNumberChecker checker(num);

    if (checker.isPerfectNumber()) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}

