//Print Fibonacci Series using Class

#include <iostream>

using namespace std;

class FibonacciSeries {
    int n;
public:
    FibonacciSeries(int num) : n(num) {}

    void printSeries() {
        int first = 0, second = 1, next;

        cout << "Fibonacci Series up to " << n << " terms:" << endl;
        cout << first << " " << second << " ";

        for (int i = 2; i < n; ++i) {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
        cout << endl;
    }
};

int main() {
    int num;

    cout << "Enter the number of terms: ";
    cin >> num;

    FibonacciSeries series(num);
    series.printSeries();

    return 0;
}

