#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findNum(vector<int> &arr, int n)
{
    cout << "Function Called" << endl;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int num = i + 1;
        if (arr[i] != num)
        {
            return num;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5};

    int n;
    cin >> n;

    int ans = findNum(arr, n);
    cout << ans << endl;
    return 0;
}
