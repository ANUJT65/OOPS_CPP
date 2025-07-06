// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;



class Parent{
    public:
    string name;
    
    Parent(string name){
        this->name = name;
    }
      
    void getter(){
        cout<< this->name <<endl;
    } 
        
};


class Child: public Parent{
    public:
    string childname;
    int age;
    
    Child(string name,string childname, int age): Parent(name){
        this->name = name;
        this->childname = childname;
        this->age = age;
    }
      
    void getter(){
        cout<< this->childname<<endl;
        cout<< this->name <<endl;
        cout<< this->age <<endl;
    } 
    
};


int main() {
    // Write C++ code here
    Parent p("anuj");
    Child c("satish", "anuj", 21);
    p.getter();
    c.getter();

    return 0;
}