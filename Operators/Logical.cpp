#include <iostream>
using namespace std;

int main() {
    cout << "Logical AND" << endl;
    cout << ((10 > 5) && (2 > 1)) << endl; //1
    cout << ((10 > 5) && (2 < 1)) << endl; //0
    cout << ((10 < 5) && (2 < 1)) << endl; //0

    cout << "Logical OR" << endl;
    cout << ((10 > 5) || (2 > 1)) << endl; //1
    cout << ((10 > 5) || (2 < 1)) << endl; //1
    cout << ((10 < 5) || (2 < 1)) << endl; //0

    cout << "Logical NOT" << endl;
    cout << (!(10 > 5)) << endl; //0
    cout << (!(10 < 5)) << endl; //1

    return 0;
}

