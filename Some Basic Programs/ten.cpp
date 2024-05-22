//Print first N natural numbers using class

#include <iostream>

using namespace std;

class NaturalNumbersPrinter {
    int N;
public:
    NaturalNumbersPrinter(int n) : N(n) {}

    void print() {
        cout << "First " << N << " natural numbers:" << endl;
        for (int i = 1; i <= N; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    NaturalNumbersPrinter printer(N);
    printer.print();

    return 0;
}

