#include <iostream>
using namespace std;

int main() {
    cout << "Logical AND" << endl;
    cout << ((10 > 5) && (2 > 1)) << endl;
    cout << ((10 > 5) && (2 < 1)) << endl;
    cout << ((10 < 5) && (2 < 1)) << endl;

    cout << "Logical OR" << endl;
    cout << ((10 > 5) || (2 > 1)) << endl;
    cout << ((10 > 5) || (2 < 1)) << endl;
    cout << ((10 < 5) || (2 < 1)) << endl;

    cout << "Logical NOT" << endl;
    cout << (!(10 > 5)) << endl;
    cout << (!(10 < 5)) << endl;

    return 0;
}

