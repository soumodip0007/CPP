#include<iostream>

using namespace std;
class Person {
    private:
    int age;
    string name;
    string address;

    public:
    void input() {
        cout<<"Enter Age : ";
        cin >>age;
        cout<<"Enter Name : ";
        cin >>name;
        cout<<"Enter Address : ";
        cin >>address;
    }
    void display() {
        cout<<"Age : "<<age<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
    }
};
int main() {
    Person mario, luigi, shaun, peach;
    mario.input();
    mario.display();
    luigi.input();
    luigi.display();
    shaun.input();
    shaun.display();
    peach.input();
    peach.display();
    return 0;
}
