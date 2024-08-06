#include <iostream>
using namespace std;

class Mario {
    private:
        int value;

    public:
        Mario(int value) {
            this->value = value;
        }

        Mario& setValue(int value) {
            this->value = value;
            return *this;
        }

        void getValue() {
            cout<<"Value: "<<this->value<<endl;
        }
};

int main() {
    Mario m(10);
    m.setValue(20).getValue();
    return 0;
}
