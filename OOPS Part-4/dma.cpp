#include <iostream>

using namespace std;

int main() {
    int *arr = new int[5];

    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; ++i) {
        cout <<"Value at index"<<i<<": "<<arr[i]<<endl;
    }

    delete[] arr;

    return 0;
}
