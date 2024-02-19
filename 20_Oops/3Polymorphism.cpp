// polymorphism : exisiting in multiple forms
// eg: a MAN  is son for her mother, husband for her wife, brother for her sisiter and a father for his son
// so here man is act like a ploymorphism which exsist in multiple forms

// types:

// 1. compile time ploymorphism --> the process is executed during compile time , also called static ploymorphism

// 2. run time ploymorphism --> the process that resolves a call to an overridden method at runtime, also called dynamic polymorphism

// method overloading: The term method overloading allows us to have more than one method with the same name, occurs in compile-time polymorphism

// compile time type:

// 1.function overloading: here two or more function can have same name but we have add some different parameters

// 2. operator overloading: here different operators can be used for different purpose depending on their arguments

// method overriding:  here an objects possess the same name, arguments, and type as their parent class but have different functionality, occur in run-time polymorphism

// rules for method overriding:
// same name, same argument, and inehritance

#include <iostream>
using namespace std;

// class A
// {

// public:

// // function overloading:
//     void sayHello()
//     {
//         cout << "Hello sir" << endl;
//     }

//     void sayHello(string name)
//     {
//         cout << "Hello " << name << endl;
//     }

//     int sayHello(string name, int age)
//     {
//         cout << "Hello: " << name << endl;
//         cout << "are you " << age << " years of age ?" << endl;
//         return 1;
//     }
// };

// class B
// {
// public:
//     int a;
//     int b;

// public:
//     int add()
//     {
//         return a + b;
//     }

//     // operator overloading
//     // void operator+(B &obj)
//     // {
//     //     // int value1 = this->a;
//     //     // int value2 = obj.a;

//     //     // cout << "Output: " << value2 * value1;

//     //     cout << "Hello" << endl;
//     // }

//     void operator()()
//     {
//         cout << "Simple Bracket operator called " << this->a << endl;
//     }
// };

// run-time polymorphism

class Animal
{

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

//  inehritance occur
class dog : public Animal
{

public:
    // same name, same argument
    void speak()
    {

        // here the functionality changes
        cout << "Barking" << endl;
    }
};

int main()
{

    // A obj;
    // obj.sayHello();

    // obj.sayHello("Dikshant");

    // obj.sayHello("Dishu", 20);

    // B obj1, obj2;

    // obj1.a = 2;
    // obj2.a = 7;

    // + operator called
    // obj1 + obj2;

    // () operator called
    // obj1();

    dog d;

    d.speak();

    return 0;
}