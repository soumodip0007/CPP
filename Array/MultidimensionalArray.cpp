#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the rows"<<endl;
    int rows;
    cin>>rows;
    cout<<"Enter the cols"<<endl;
    int cols;
    cin>>cols;
    int arr[rows][cols];
 
    cout << "Enter " << rows * cols << " Elements : " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter array elements for position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "The Array Elements are : " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

