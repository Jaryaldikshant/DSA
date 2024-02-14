#include <iostream>
using namespace std;
class animal
{
public:
    string animalname;
    int age;
    int weight;

public:
    void set_name(string n)
    {
        animalname = n;
    }

    void print_Name()
    {
        cout << "Name: " << animalname << endl;
    }
};

// hierarchical inheritance: a class serve as parent class for more than one class, here is animal
class dog : public animal
{
public:
    void set_age(int a)
    {
        age = a;
    }

    void print_age()
    {
        cout << "Age: " << age << endl;
    }
};

class cat : public animal
{

public:
    void set_weight(int w)
    {
        weight = w;
    }

    void print_weight()
    {
        cout << "Weight: " << weight << endl;
    }
};

int main()
{

    animal obj1;
    obj1.set_name("Tuffy");
    obj1.print_Name();

    dog d1;
    d1.set_name("Sam");
    d1.set_age(2);
    d1.print_Name();
    d1.print_age();

    cat c1;
    c1.set_name("Buddy");
    c1.set_weight(15);

    c1.print_Name();
    
    c1.print_weight();

    return 0;
}