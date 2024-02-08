#include <iostream>
using namespace std;
int main()
{

    // variable scoping

    // decalaration
    int a;

    // initialisation
    int b = 5;
    // updation
    b = 10;

    if (true)
    {
        // int b = 15;
        cout<<b<<endl;
    }
    cout<<b;

    return 0;
}