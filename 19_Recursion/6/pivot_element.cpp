#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int pivotEle(int *arr, int n, int st, int ed)
{
    int mid = st + (ed - st) / 2;

    print(arr, n); // function call


    // base case
    if (st >= ed)
    {
        return st;
    }
 
 
    if (arr[mid] >= arr[0])
    {
        return pivotEle(arr, n, mid + 1, ed);
    }

    else
    {
        return pivotEle(arr, n, st, mid);
    }
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};

    int size = 6;

    int ans = pivotEle(arr, size, 0, size - 1);
    cout << "Pivot index: " << ans << endl;

    return 0;
}