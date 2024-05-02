#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a = 10, b = 0, c;
    
    try {
        if (b == 0) {
            throw runtime_error("Division by zero exception");
        }
        c = a / b;
        cout << "Result: " << c << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    
    cout << "End of code" << endl;
    return 0;
}

