
// Recursion: a function calling itself
// Base Case: a condition where we want to stop the function

//  bdii_Prlm = n*chotii_Prblm
//  f(n) = n*(n-1)
//  Base Case --> wo Condition jahan pe rukhna hai

#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    int small_prblm = factorial(n - 1); //  Here function calling itself "factorial(n-1)"
    int big_prblm = n * small_prblm;

    return big_prblm;
}

int main()
{
    int n; 
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
       
    return 0;
}