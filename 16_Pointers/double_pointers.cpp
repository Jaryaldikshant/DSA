#include <iostream>
using namespace std;

// void update(int **p2)
// {

    // p2 = p2 + 1; // here nothing will change , the changed value is in update function not in main fuunction 

    // *p2 = *p2 + 1; here value of p will change in the main function , it assign the value of p2(830) which the (address of p 830) which again asign the value of p(716) and hence addition of 1 takes place in the  address of p2 which is 716 + 1(4 bytes) = 720

    // **p2 = **p2 + 1; here value of i (i=5) will change, because it assign the value of p2 (p2=830) which is the address of p (p=716) and again it asign the value of p (p=716) which is the address of i value(i=5) and hence addition of 1 takes place in the value of i which is 5+1 ()
// }
 
int main()
{
    // int i = 5;
    // int *p = &i;
    // int **p2 = &p;

    // cout << "All Good" << endl;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;

    // cout << "Before: " << endl;
    // cout << i << endl;
    // cout << p << endl;
    // cout << p2 << endl;

    // update(p2);

    // cout << "After: " << endl;
    // cout << i << endl;
    // cout << p << endl;
    // cout << p2 << endl;


    

    return 0;
}



