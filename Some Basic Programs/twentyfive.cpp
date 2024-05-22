//Print Tribonacci Series using Class

#include <iostream>

using namespace std;

class TribonacciSeries {
    int n;
public:
    TribonacciSeries(int num) : n(num) {}

    void printSeries() {
        int first = 0, second = 1, third = 1, next;

        cout << "Tribonacci Series up to " << n << " terms:" << endl;
        cout << first << " " << second << " " << third << " ";

        for (int i = 3; i < n; ++i) {
            next = first + second + third;
            cout << next << " ";
            first = second;
            second = third;
            third = next;
        }
        cout << endl;
    }
};

int main() {
    int num;

    cout << "Enter the number of terms: ";
    cin >> num;

    TribonacciSeries series(num);
    series.printSeries();

    return 0;
}

