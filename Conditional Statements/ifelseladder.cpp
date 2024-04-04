#include <iostream>

using namespace std;

int main() {
    int gameScore;
    cout << "Enter Your Game Score: ";
    cout << "Top score is 1000" << endl;
    cin >> gameScore;

    if (gameScore >= 800) {
        cout << "You are pro" << endl;
    } else if (gameScore >= 600) {
        cout << "Moderate" << endl;
    } else if (gameScore >= 400) {
        cout << "Ok Fine!" << endl;
    } else {
        cout << "lol - noob!" << endl;
    }

    return 0;
}

