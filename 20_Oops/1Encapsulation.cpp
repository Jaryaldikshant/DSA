// Encapsulation: wrapping up (data members & functions)

// the process in which all data members are in private class and can only be accessed by same class


#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    float height;

public:
    void setAge(int a)
    {
        this->age = a;
    }

    void setName(string nm)
    {
        this->name = nm;
    }

    void setHeight(float h)
    {
        this->height = h;
    }

    int getAge()
    {
        return this->age;
    }

    string getName()
    {
        return this->name;
    }

    float getHeight()
    {
        return this->height;
    }

    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Height: " << this->height << endl;
    }
};

int main()
{
    student first;

    // first.print(20, "Dikshant", 57);

    string str = "Dikshant";
    float h = 5.8;
 
    first.setAge(20);
    first.setName(str);
    first.setHeight(h);

    cout << "Name: " << first.getName() << endl;

    cout << "Age: " << first.getAge() << endl;

    cout << "Height: " << first.getHeight() << endl;

    // cout << "Going all good" << endl;

    return 0;
}