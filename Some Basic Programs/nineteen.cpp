//Check buzz number or not using class

#include <iostream>

using namespace std;

class BuzzNumberChecker {
    int number;
public:
    BuzzNumberChecker(int num) : number(num) {}

    bool isBuzzNumber() {
        return (number % 7 == 0 || number % 10 == 7);
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    BuzzNumberChecker checker(num);

    if (checker.isBuzzNumber()) {
        cout << num << " is a buzz number." << endl;
    } else {
        cout << num << " is not a buzz number." << endl;
    }

    return 0;
}

