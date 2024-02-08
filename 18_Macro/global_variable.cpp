#include <iostream>
using namespace std;

// global variable [don't use anywhere]
//  bad practice because it can be changed in any function  like in function a score value is changed
int score = 15;

void a(int &i)
{
    cout << score << " in a" << endl;
    cout << i << endl;
    score = 40; 
}

void b(int &i)
{
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main()
{
    cout << score << " in main" << endl;

    int i = 5;
    a(i);
    b(i);

    // {
    //     // Local Variable
    //     int i = 2;
    //     cout << i << endl;
    // }

    // cout << i << endl;

    return 0;
}