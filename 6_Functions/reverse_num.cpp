#include <iostream>
using namespace std;

int getRev(int num)
{
    int rem = 0;
    int rev = 0;
   

  while (num>0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    int ans = getRev(n);
    cout << ans << " ";
    return 0;
}