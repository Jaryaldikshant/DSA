#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    // this function can be access the level which is inside the private class
    void print()
    {
        cout << level << endl;
    }

    // getter function which return the value
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    //  setter function which set the value

    void setHealth(int h)
    {

        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // creating a object
    Hero h1;

    cout<<"size of h1: "<< sizeof(h1) << endl;

    // can access the value of health which is inside the private by using get() and set() function

    // setting the value of health
    h1.setHealth(82);

    // getting the value of health
    cout << "Ram health is: " << h1.getHealth() << endl;

    // h1.health = 70;

    // here level is in public class it can be initialize using
    h1.level = 'A';
    cout << "Ram level is: " << h1.level << endl;

    //  and we can also  set the value of level using set() function
    h1.setLevel('D');

    cout << "Ram level is: " << h1.getLevel() << endl;

    return 0;
}