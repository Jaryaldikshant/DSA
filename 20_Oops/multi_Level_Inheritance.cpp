#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};


// here multi-level inheritance used as animal is parent class for dog and dog is the child class for animal, and now dog is the parent class for lebra and lebra is the child class for dog

class dog: public animal{

};

class lebra: public dog{

};

int main(){

    lebra l;
    l.speak();

return 0;
}