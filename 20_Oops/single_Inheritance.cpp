#include <iostream>
using namespace std;
class animal
{

public:
    int weight;
    int age;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

// single inheritance: The inheritance in which a single derived(child) class is inherited from a single base(parent) class
class Dog : public animal
{
};

int main()
{

    Dog d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}