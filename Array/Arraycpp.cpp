#include <iostream>
using namespace std;

int main() {
    // Printing array elements 
    int arr[5];  // declaration
    arr[0] = 10; // initialization
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    // traversing array
    for(int i = 0; i < 5; i++) // length is 5
        cout << arr[i] << endl;

    return 0;
}

