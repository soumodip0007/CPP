#include <iostream>

using namespace std;
#define SQUARE(x) ((x) * (x))
int main() {
    int num;
    cout<<"Enter a number to find it's square : ";
    cin>>num;
    cout << "Square of " << num << " is: " << SQUARE(num) << endl;
    return 0;
}

