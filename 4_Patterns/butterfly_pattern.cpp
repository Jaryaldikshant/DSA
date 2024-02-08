#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // For right angled triangle
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // for space pyramid
        for (int sp = 0; sp < ((2 * n) - (2 * i) - 2); sp++)
        {
            cout << " ";
        }

        // for mirrored star triangle
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // for reverse patten
    for (int i2 = 0; i2 < n; i2++)
    {
        // for reverse triangle
        for (int j2 = 0; j2 < n - i2; j2++)
        {
            cout << "*";
        }

        // for reverse space pyramid
        for (int sp2 = 0; sp2 < 2*i2; sp2++)
        {
            cout << " ";
        }
        
        // for reverse mirrored star triangle
        for (int j2 = 0; j2 < n-i2; j2++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}

// return 0;
