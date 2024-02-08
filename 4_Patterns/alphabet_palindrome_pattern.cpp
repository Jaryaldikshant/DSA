#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            int ans = j + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }

        // for reverse counting
        for (j = i; j >= 1; j--)
        {
            int ans = j;
            char ch = ans + 'A' - 1;

            cout << ch;
        }

        cout << endl;
    }
}