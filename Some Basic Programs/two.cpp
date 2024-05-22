//Print ASCII value of any character using classes 
#include <iostream>

using namespace std;

class ASCIIConverter {
    char character;
public:
    ASCIIConverter(char c) : character(c) {}
    
    void printASCII() {
        cout << "The ASCII value of '" << character << "' is " << int(character) << endl;
    }
};

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;

    ASCIIConverter converter(c);
    converter.printASCII();

    return 0;
}

