#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int sp = 0; sp < n - i - 1; sp++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        }
        for (int k = i; k >= 1; k--)
        {
            cout<<k;
        }
        
        
        cout << endl;
    }

    return 0;
}