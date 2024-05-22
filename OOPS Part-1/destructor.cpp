#include<iostream>

using namespace std;
class Mario {
public:
    Mario() {
        cout <<"Mario Constructor called"<<endl;
    }

    ~Mario() {
        cout <<"Mario Destructor called"<<endl;
    }
};

int main() {
    Mario m;
    return 0;
}

