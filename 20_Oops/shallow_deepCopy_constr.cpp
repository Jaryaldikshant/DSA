//  In Shallow copy: basically we are accessing a same memory with two different name of an object


// by default : shallow copy is used


//  In Deep copy: an entire copy of array is formed which and have a different memory for different object



// In "SHALLOW" copy, the modification done on one array affects the other array. In "DEEP" copy, the modification done on one array does not affect the other array.

#include <iostream>
#include<string.h>
using  namespace std;

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

    // // paramerterised constructor
    // IronMan(int health)
    // {
    //     this->health = health;
    // }

    // IronMan(int health, char level)
    // {
    //     this->level = level;
    //     this->health = health;
    // }

    //  copy constructor
    IronMan(IronMan &temp)
    {

        // in deep copy case a entire new array is formed which have different address and (h2) will be diff name fron (h1)

        char *tempName = new char[strlen(temp.name) + 1];

        strcpy(tempName, temp.name);

        this->name = tempName;
        this->health = temp.health;

        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    int
    getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

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
};

int main()
{

    IronMan h1;

    h1.setHealth(54);

    h1.setLevel('A');

    char name[] = "TonyStark";

    h1.setName(name);

    h1.print();

    // using defalut copy(shallow copy) constructor create a new object

// copying for h2 from h1
    IronMan h2(h1);

    h2.print();

    h1.name[0] = 'G';
    h1.print();

    //  here same memory will be access with two different name, because when we use shallow copy  it show the same address

    h2.print();

    return 0;
}