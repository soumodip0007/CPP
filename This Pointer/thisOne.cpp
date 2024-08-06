#include <iostream>
using namespace std;

class Mario {
    private:
        int value;

    public:
        Mario(int value) {
            this->value = value;
        }

        void disp() {
            cout<<"Value: "<<this->value<<endl;
        }
};

int main() {
    Mario m(10);
    m.disp();
    return 0;
}
