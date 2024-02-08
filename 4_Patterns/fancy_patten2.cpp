#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // for stars
        for (int sp = 0; sp < ((2 * n) - 2 - i); sp++)
        {
            cout << "*";
        }

        // for numbers+stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << "*";
            }
        }
        for (int sp2 = 0; sp2 < ((2 * n) - 2 - i); sp2++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}