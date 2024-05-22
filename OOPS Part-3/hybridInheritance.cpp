#include<iostream>

using namespace std;
class Mario {
		int a;
		public:
	    	void input() {
	    		cout<<"Enter a number : ";
	    		cin>>a;
			}
			void show() {
				cout<<a<<endl;
			}
};
class Luigi:virtual public Mario{
    
};
class Shaun:virtual 
public Mario{
    
};
class Peach:public Luigi, public Shaun {
	
};

int main() {
	
	Mario m;
	Luigi l;
	Shaun s;
	Peach p;
	
	m.input();
	m.show();
	
	l.input();
	l.show();
	
	s.input();
	s.show();
	
	p.input();
	p.show();
	
	return 0;
}
