#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i2 = 0; i2 < n; i2++)
    {
        for (int j2 = 0; j2 < n - i2-1; j2++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}