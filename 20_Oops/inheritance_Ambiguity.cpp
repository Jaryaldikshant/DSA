
// if we have function func1() with same name in two diffent class A and B and class C in inherit form A and B
// , so during function call be use scope resolution function ::

#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Hello A" << endl;
    }
};

class B
{

public:
    void print()
    {
        cout << "Hey B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj1;

    // here (::) scope resolution is used to know function of which class is to be called
    obj1.A::print();

    obj1.B::print();

    return 0;
}