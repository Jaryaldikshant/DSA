//  before creating constructor a default constructor is always there

// here is Ram.Hero()


//  and whenever we create a constructor a default constructor will automatically removed

#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    int level;

    // creating a constructor without perameter
    Hero()
    {
        cout << "Constructor Called" << endl;
    }
};

int main()
{

    // creating a object statically
    Hero Ram;

    // by creating a object  staticaly or dynamically a constructor will  always call

    // creating a object dynamically
    Hero *h = new Hero;

    return 0;
}