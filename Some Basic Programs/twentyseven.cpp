//Find Greatest among three numbers using Class

#include <iostream>

using namespace std;

class GreatestNumberFinder {
public:
    int findGreatest(int a, int b, int c) {
        if (a >= b && a >= c) {
            return a;
        } else if (b >= a && b >= c) {
            return b;
        } else {
            return c;
        }
    }
};

int main() {
    GreatestNumberFinder finder;

    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int greatest = finder.findGreatest(num1, num2, num3);

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}

