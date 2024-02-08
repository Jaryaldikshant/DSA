#include <iostream>
using namespace std;

int getMax(int x, int y, int z)
{
    if (x > z && x > y)
    {
        return x;
    }

    else if (y > x && y > z)
    {
        return y;
    }

    else
    {
        return z;
    }
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int max = getMax(a, b, c);
    cout << max << endl;

    return 0;
}