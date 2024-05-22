//Print first N perfect square number using class

#include <iostream>
#include <cmath>

using namespace std;

class PerfectSquarePrinter {
    int N;
public:
    PerfectSquarePrinter(int n) : N(n) {}

    void print() {
        cout << "First " << N << " perfect square numbers:" << endl;
        for (int i = 1; i <= N; ++i) {
            cout << i * i << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    PerfectSquarePrinter printer(N);
    printer.print();

    return 0;
}

