// copy : initializes an object using another object of the same class

#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "defalut contructor called";
    }

    // paramerterised constructor
    Hero(int health, char level)
    {
        this->health = health;

        this->level = level;
    }

    // copy constructor

    // here temp is statically allocated, so we use (temp.health) rather than (temp->health)

    // here Hero is passed by reference not passed by value , so ( & ) is used , if we send a copy of sir it will result in infinte loop , so we have to send the same sir which we have called below
    Hero(Hero &temp)
    {
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Health: " << this->health << endl;

        cout << "Level: " << this->level << endl;
    }
};

int main()
{

    Hero sir(70, 'C');
    sir.print();
    cout << endl;

    // automatically a copy constructor is generated
    // whenever we create a class

    cout << endl;
    // copy contructor call
    Hero m(sir);
    m.print();

    return 0;
}