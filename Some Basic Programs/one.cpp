//Print Multiplication table of a number using classes
#include <iostream>

using namespace std;

class MultiplicationTable {
    int number;
public:
    MultiplicationTable(int num) : number(num) {}
    
    void printTable(int limit) {
        for(int i = 1; i <= limit; ++i) {
            cout << number << " * " << i << " = " << number * i << endl;
        }
    }
};

int main() {
    int num, limit;

    cout << "Enter the number for which you want the multiplication table: ";
    cin >> num;
    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    MultiplicationTable table(num);
    table.printTable(limit);

    return 0;
}

