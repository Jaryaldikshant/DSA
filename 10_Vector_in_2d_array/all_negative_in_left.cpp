#include <iostream>
#include <vector>
using namespace std;

// DUTCH NATIONAL FLAG PROBLEM
void moveAllNegtoLeft(int *a, int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {

        if (a[low] < 0)
        {
            low++;
        }
        else if (a[high] > 0)
        {
            high--;
        }

        else
        {
            swap(a[low], a[high]);
        }
    }
}

int main()
{

    int arr[] = {1, 2, -3, 4, -5, 6, 34, -7};
    int n = sizeof(arr) / sizeof(int);

    moveAllNegtoLeft(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}