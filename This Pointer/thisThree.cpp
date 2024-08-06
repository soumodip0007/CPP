#include <iostream>
using namespace std;

class Mario {
    private:
        int value;

    public:
        Mario(int value) {
            this->value = value;
        }

        Mario* getThis() {
            return this;
        }

        void disp() {
            cout<<"Value: "<<value<<endl;
        }
};

int main() {
    Mario m(10);
    Mario* ptr = m.getThis();
    ptr->disp();
    return 0;
}
