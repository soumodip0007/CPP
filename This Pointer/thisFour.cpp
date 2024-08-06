#include <iostream>
using namespace std;

class Mario {
	private:
	    int value;
	
	public:
	    Mario(int value) {
	        this->value = value;
	    }
	
	    bool isEqualTo(const Mario& other) {
	        return this->value == other.value;
	    }
};

int main() {
    Mario m1(10);
    Mario m2(10);
    Mario m3(20);
    
    cout<<"Object 1 is equal to Object 2: "<<m1.isEqualTo(m2)<<endl;
    cout<<"Object 1 is equal to Object 3: "<<m1.isEqualTo(m3)<<endl;

    return 0;
}
