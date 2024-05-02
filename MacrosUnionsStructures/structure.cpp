#include<iostream>

using namespace std;
struct Student {
	int roll;
	string name;
};
int main() {
	struct Student S;
	S.name = "Mario";
	S.roll = 1;
	cout<<S.roll<<ends<<S.name<<endl;
	cout<<sizeof(Student)<<endl;
}
