//Check Prime Number or Not using Class

#include <iostream>
#include <cmath>

using namespace std;

class PrimeChecker {
    int number;
public:
    PrimeChecker(int n) : number(n) {}

    bool isPrime() {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    PrimeChecker checker(n);

    if (checker.isPrime()) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

