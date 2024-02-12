#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    char name;
    char level;

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }
};

int main()
{

    hero a(10, 'C');

    hero b(20, 'B');

    a.print();
    b.print();
    cout << endl;

    // using copy assignment operator
    a = b;
    // basically here value of health and level for b assigned to a

    a.print();
    b.print();

    return 0;
}