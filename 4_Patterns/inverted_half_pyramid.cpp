#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = n; col > row; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
