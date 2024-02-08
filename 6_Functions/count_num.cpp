#include <iostream>
using namespace std;

void getCount(int n)  // Here n is perameter
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    getCount(n); // Here n is argument 

    return 0;
}