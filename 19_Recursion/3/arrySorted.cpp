#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

    // base case when arr size = 0 or 1 means they already Sorted

    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is Sorted: " << ans << endl;
    }

    else
    {
        cout << "Array is not sorted: " << ans << endl;
    }
    return 0;
}