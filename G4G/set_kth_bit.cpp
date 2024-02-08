#include <iostream>
using namespace std;

int getKshift(int n, int k)
{
    int mask = 1 << k;
    int ans = n | mask;
    return ans;
}
int main()
{
    int n;
    int k;
    cin >> n >> k;
    int ans = getKshift(n, k);
        cout<<ans<<" ";
    return 0;
}

 