#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, Greater1;
    Greater1 = (a > b) ? a : b;
    cout << Greater1 << endl;

    int x = 30, y = 20, z = 30, Greater2;
    Greater2 = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    cout << Greater2 << endl;

    return 0;
}

