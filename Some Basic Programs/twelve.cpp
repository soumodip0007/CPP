//Convert character uppercase into lowercase or vice-versa using class

#include <iostream>

using namespace std;

class CaseConverter {
    char character;
public:
    CaseConverter(char c) : character(c) {}

    char convert() {
        if (islower(character)) {
            return toupper(character);
        } else if (isupper(character)) {
            return tolower(character);
        } else {
            return character;
        }
    }
};

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;

    CaseConverter converter(c);

    cout << "Converted character: " << converter.convert() << endl;

    return 0;
}

