#include <iostream>
using namespace std;

int main() {
    
    int x = 30, y = 20, z = 30, Greater2;
    Greater2 = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    cout << Greater2 << endl;

    return 0;
}

