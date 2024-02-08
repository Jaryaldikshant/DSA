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
        for (int st = 0; st < 2 * i + 1; st++)
        {
            if (st == 0 || st == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int sp = 0; sp < i; sp++)
        {
            cout << " ";
        }

        for (int st2 = 0; st2 < (2 * n - (2 * i + 1)); st2++)
        {
            if (st2 == 0 || st2 == ((2 * n - (2 * i + 1)) - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
