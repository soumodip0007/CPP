#include <iostream>  
using namespace std;  
class Employee {  
   public:  
      int id;    
      string name;  
};  
int main() {  
    Employee e;  
    e.id = 1;    
    e.name = "Mario";   
    cout<<e.id<<endl;  
    cout<<e.name<<endl;  
    return 0;  
}  
