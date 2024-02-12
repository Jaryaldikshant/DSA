//  destructor : used to deallocate the memory
// whenever the object become out of scope means their lifetym finishes then our destructor will called and it will free the memory

//  In Shallow copy: basically we are accessing a same memory with two different name of an object

// by default : shallow copy is used

//  In Deep copy: an entire copy of array is formed which and have a different memory for different object

#include <iostream>
#include <string.h>
using namespace std;

class IronMan
{

private:
    int health;

public:
    // here name value is used not a copied value
    char *name;
    char level;

    IronMan()
    {
        cout << "Simple contructor called" << endl;
        name = new char[100];
    }

    // paramerterised constructor
    IronMan(int health)
    {
        this->health = health;
    }

    IronMan(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    //  copy constructor
    // IronMan(IronMan &temp)
    // {

    //     // in deep copy case a entire new array is formed which have different address and (h2) will be diff name fron (h1)

    //     char *tempName = new char[strlen(temp.name) + 1];

    //     strcpy(tempName, temp.name);

    //     this->name = tempName;
    //     this->health = temp.health;

    //     this->level = temp.level;
    // }

    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    // int
    // getHealth()
    // {
    //     return health;
    // }

    // char getLevel()
    // {
    //     return level;
    // }

    void setHealth(int h)
    {

        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // destructor
    ~IronMan()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{

    // for static automatically destructor called
    IronMan a;

    // for dynamic
    IronMan *b = new IronMan();

    // manullly destructor called
    delete b;

    return 0;
}