#include <iostream>
using namespace std;

int getFibonacci(int num)
{

    if (num == 0)
        return 0;
    if (num == 1)
        return 1;

    int all =  getFibonacci(num - 1) + getFibonacci(num - 2); ;
    

    return all;
}

int main()
{
    int num;
    cin >> num;

    int ans = getFibonacci(num);
    cout << ans << endl;
    return 0;
}