#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // First inverted half pyramid
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // Full pyramid of space
        for (int sp = 0; sp < 2 * i + 1; sp++)
        {
            cout << " ";
        }

        // Second inverted half pyramid
        for (int j2 = 0; j2 < n - i; j2++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i2 = 0; i2 < n; i2++)
    {
        //  First  half pyramid
        for (int k = 0; k < i2 + 1; k++)
        {
            cout << "*";
        }

        // Inverted full pyramid
        for (int sp2 = 0; sp2 < 2 * n - 2 * i2 - 1; sp2++)
        {
            cout << " ";
        }

        // Second half pyramid
        for (int k2 = 0; k2 < i2 + 1; k2++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
