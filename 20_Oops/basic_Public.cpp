#include <iostream>


// used for adding external class
// #include "Hero.cpp"

using namespace std;

class Hero
{

    public:
    // properties
    string name;
    int health;
    char level;

    // private:
    // char level;

  

};

int main()
{

    // creating a Hero type object
    Hero h1; 


    h1.name = "Ram";

    h1.health = 95;

    h1.level = 'A';


    // accessing the property/ data members
    cout<<"Name is: "<<h1.name<<endl;

    cout<<"Health is: "<<h1.health<<endl;

    cout<<"Level: "<<h1.level<<endl;


// showing error because when level is in private and can't be accessed

    // cout<<"Level is: "<<h1.level<<endl;


    // cout << "size of object: " << sizeof(h1) << endl;



 

    return 0;
}