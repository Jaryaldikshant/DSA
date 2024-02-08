#include <iostream>
using namespace std;

int peakElement(int *arr, int n, int st, int ed)
{

    if (st > ed)
    {
        return -1;
    }

    int mid = st + (ed - st) / 2;

    if (ed == mid)
    {
        return mid;
    }

    if (arr[mid] < arr[mid + 1])
    {
        return peakElement(arr, n, mid + 1, ed);
    }

    else
    {
        return peakElement(arr, n, st, mid);
    }
}

int main()
{
    int arr[6] = {3, 4, 5, 10, 14, 17};
    int size = 6;

    int st = 0;
    int ed = size - 1;

    int ans = peakElement(arr, size, st, ed);

    if (ans)
    {
        cout << "Peak elemnt found: " << ans << endl;
    }

    else
    {
        cout << "No Peak element found !!" << endl;
    }

    return 0;
}