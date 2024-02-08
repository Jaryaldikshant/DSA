#include <iostream>
using namespace std;
int main()
{
    // pointer to int is created and poinitng to some garbage address

    // int *p = 0;

    // cout << *p;

    // int i = 5;

    // int *p = &i;

    // cout<< p <<endl;
    // cout<<*p<<endl;

    // int num = 5;
    // int a = num;
    // a++;
    // cout << num << endl;

    // int *p = &num;
    // cout << *p << endl;
    // int x = *p;
    // x++;
    // cout << x;

    // copying a pointer

    // int *q = p;

    // cout << p << " " << q << endl;

    // cout << *p << " " << *q << endl;

    // pointer airthmatic

    int i = 3;

    int *t = &i;
    cout << (*t)++ << endl;
    
    // *t = *t + 1;
    // cout << *t << endl;

    cout << "Befor t: " << t << endl;

    t = t + 1;
    cout << "After t: " << t << endl;

    return 0;
}