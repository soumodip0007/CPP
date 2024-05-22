//Print ASCII table using classes

#include <iostream>

using namespace std;

class ASCIITable {
public:
    void printTable() {
        cout << "ASCII Table:" << endl;
        cout << "Char\tASCII" << endl;
        for (int i = 32; i <= 126; ++i) {
            cout << char(i) << "\t" << i << endl;
        }
    }
};

int main() {
    ASCIITable table;
    table.printTable();
    return 0;
}

