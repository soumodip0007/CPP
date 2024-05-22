//Check leap year using classes

#include <iostream>

using namespace std;

class LeapYearChecker {
    int year;
public:
    LeapYearChecker(int y) : year(y) {}

    void checkLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    }
};

int main() {
    int y;

    cout << "Enter a year: ";
    cin >> y;

    LeapYearChecker checker(y);
    checker.checkLeapYear();

    return 0;
}

