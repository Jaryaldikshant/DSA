#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n - i; sp++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }
    for (int i2 = 0; i2 < n; i2++)
    {

        for (int sp1 = 0; sp1 < i2; sp1++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i2; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
}