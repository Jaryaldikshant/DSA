#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{

    // static allocation
    Hero a;

    a.level = 'D';
    cout << "Level: " << a.level << endl;

    a.setHealth(55);
    cout << "Health: " << a.getHealth() << endl;

    // creating a new object dynamically
    Hero *b = new Hero;

    (*b).level = 'X';
    cout << "level: " << (*b).level << endl;

    (*b).setHealth(70);
    cout << "Health using (*) : " << (*b).getHealth() << endl;

    // (*b) can  also be Written as  b->
    b->setHealth(10);
    cout << "Health using (->) : " << b->getHealth() << endl;

    return 0;
}