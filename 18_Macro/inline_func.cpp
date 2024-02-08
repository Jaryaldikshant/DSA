#include <iostream>
using namespace std;


// inline function--> whenever a function is called in the code it replace the function call with function body

// conditions:
// 1. if func. body is of 1 line, it will work
// 2. if func. body is of 2-3 line, it depends on compiler 
// 2. if func. body is >3 line, it doesn't work

// Pros: performance better during code execution ,no need of function call and no need of extra storage and enhance code readability

inline int getMax(int &a, int &b)
{

    // TERNARY OPERATOR
    return (a > b ? a : b); 
}

int main()
{

    int a = 5;
    int b = 2;

    int ans = 0;

    // if-else statement can be changed using ternary operator

    ans = getMax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 2;

    ans = getMax(a, b);

    cout << ans << endl;

    // func(a,b);

    return 0;
}