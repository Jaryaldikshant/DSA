#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i == n || i + j == n+1 || j == n + i - 1)
            {
                cout << "*";
            }
            else{
            cout << " ";
        }
        
    }
    cout << endl;
    }
}