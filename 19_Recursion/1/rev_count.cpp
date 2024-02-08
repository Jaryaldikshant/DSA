#include <iostream>
using namespace std;

void revCount(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // recursive relation
    revCount(n - 1);
    
    cout << n << " ";
}

int main()
{

    int num;
    cin >> num;
    cout << endl;
    revCount(num);

    return 0;
}