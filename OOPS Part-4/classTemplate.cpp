#include<iostream>

using namespace std;
template<class T>
class Mario {
	T a, b;
	public:
		Mario(T x, T y) {
			a = x;
			b = y;
		}
		void show() {
			cout<<"a = "<<a<<ends<<"b = "<<b<<endl;
		}
};
int main() {
	Mario<int> m1(100, 200); //class_name <datatype> class_object;
	Mario<double> m2(100.24, 200.25);
	m1.show();
	m2.show();
	return 0;
}
