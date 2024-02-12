// static member: create a type of data member which belongs to class, to access that data mamber we don't need to create a object

#include <iostream>
#include <string.h>
using namespace std;

class hero
{

private:
    int health;

public:
    char *name;
    char level;

    
    // static keyword
    static int timeToComp;

   hero()
    {
        cout << "Simple contructor called" << endl;
        name = new char[100];
    }

    // paramerterised constructor
    hero(int health)
    {
        this->health = health;
    }

    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }



    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
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

    // destructor
    ~hero()
    {
        cout << "Destructor Called" << endl;
    }
};

// initalizing out of the class :  dataype ClassName ::(scope resolution operator) fieldName = value
int hero::timeToComp = 5;


int main()
{

     cout << hero::timeToComp << endl;

    hero a;
    cout << a.timeToComp << endl;

}

