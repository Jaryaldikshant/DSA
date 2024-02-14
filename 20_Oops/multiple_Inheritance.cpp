#include<iostream>
using namespace std;
class animal{

    public:
    string name;
    int age;

public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};


class human{

    public:
    string color;

    public:

    void speak(){
        cout<<"Speaking"<<endl;
    }
};


// multiple inheritance: a sub class which inherit from two or more diff parent class
class both: public animal, public human{

};
int main(){

   both obj1;
    obj1.speak();
    obj1.bark();
 
return 0;
}