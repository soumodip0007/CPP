//Check weather a character is vowel or consonant using class

#include <iostream>

using namespace std;

class CharacterChecker {
    char character;
public:
    CharacterChecker(char c) : character(c) {}

    void checkVowelOrConsonant() {
        char lowerChar = tolower(character);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            cout << character << " is a vowel." << endl;
        } else if (isalpha(lowerChar)) {
            cout << character << " is a consonant." << endl;
        } else {
            cout << character << " is not an alphabet character." << endl;
        }
    }
};

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;

    CharacterChecker checker(c);
    checker.checkVowelOrConsonant();

    return 0;
}

