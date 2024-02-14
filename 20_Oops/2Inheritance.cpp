// Inheritance: mechanism that allow a class(child class) to inherit the properties(object) and behaviour(functions) from another class(parent class)


#include <iostream>
using namespace std;

class human
{

// here protected class is used : members of this class can be accessible within the class or inside the child class
protected:
    int height;


// here members can accessible from anywhere
public:
    int weight;


// here memebrs can be accessible within the class only
private:
    int age;


public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

// // Here male class is inheriting human class publically
// class male : public human

// // here male is child class
// {

// public:
//     string color;

//     void sleep()
//     {
//         cout << "Male is Sleeping" << endl;
//     }
// };

class male : public human
{

public:
    string color;

    void sleep()
    {
        cout << "Male is Sleeping" << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    // male obj1;

    // cout << obj1.age << endl;
    // cout << obj1.height << endl;
    // cout << obj1.weight << endl;

    // cout << obj1.color << endl;

    // obj1.setWeight(77);
    // cout << obj1.weight << endl;
    // obj1.sleep();

    male m1;
    cout << m1.getHeight() << endl;

    return 0;
}