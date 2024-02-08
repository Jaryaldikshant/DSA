#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (int sp = 0; sp < n - i - 1; sp++)
        {
            cout << "-";
        }

        int start1 = i + 1;
        for (j = 0; j < i + 1; j++)
        {
            cout << start1;
            start1++;
        }

        int start = 2 * i;
        for (int col = 0; col < i; col++)
        {
            cout << start;
            start--;
        }

        cout << endl;
    }
}