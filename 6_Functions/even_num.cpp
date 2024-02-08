#include <iostream>
using namespace std;

int getEven(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i+2)
    { 
        sum = sum+i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = getEven(n); // function call
    cout << ans << " ";

    return 0;
}