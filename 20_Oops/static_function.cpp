// static function : called by className , no need of object , don't have (this) keyword, can access only static member/keyword
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

    // creating a static function
    static int rem()
    {
        return timeToComp;
    }

    ~hero()
    {
        cout << "Destructor Called" << endl;
    }
};


int hero::timeToComp = 5;

int main()
{


    cout << hero::rem() << endl;

    hero a;
    cout << a.timeToComp << endl;
}
