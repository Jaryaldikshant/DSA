#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int st, int ed, int key)
{
    cout << endl;
    print(arr, st, ed);

    int mid = st + (ed - st) / 2;
    cout << "Value of arr mid: " << arr[mid] << endl;

    // base case

    // element not found
    if (st > ed)
    {
        return false;
    }

    // element found
    if (arr[mid] == key)
    {
        return true;
    }

    // search in right part
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, ed, key);
    }

    // search in left part
    else
    {

        return binarySearch(arr, st, mid - 1, key);
    }
}

int main()

{
    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 222;

    int start = 0;
    int end = size - 1;

    bool ans = binarySearch(arr, start, end, key);
    cout << "Present or Not: " << ans << endl;

    return 0;
}