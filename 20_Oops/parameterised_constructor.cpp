// parameterised : initialize an object with specified value

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    // Parameterised constructor
    Hero(int health)
    {

        // cout << "This: " << this << endl;

        // here ( this->health ) means the health which is in the object and normal health is the one which is defined here (int health)
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;

        // here ( this->level ) is the level in the obejct and the level is the one which is defined here (char level)

        this->level = level;
    }

    void print()
    {
        cout << level << endl;

        // cout<<health<<endl;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
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
};

int main()
{
   
    // creating object statically
    Hero Ram(10);
    // cout << "Address of Ram: " << &Ram << endl;

    // it will print some garbage value
    // Ram.print();

    Hero *h1 = new Hero(11);
    
    // it will also print some garbage value
    // h1->print();

    Hero temp(22, 'B');
    temp.print();

    return 0;
}