#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "Size of array: " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int n, int key)
{

    print(arr, n);

    // base case
    if (n == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainigPart = linearSearch(arr + 1, n - 1, key);
        return remainigPart;
    }
}

int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 12;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "key is Present : " << ans << endl;
    }

    else
    {
        cout << "Key is Absent: " << ans << endl;
    }

    return 0;
}