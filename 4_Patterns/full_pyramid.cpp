#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int sp = 1; sp < 7 - i; sp++)
        {
            cout << "-";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}