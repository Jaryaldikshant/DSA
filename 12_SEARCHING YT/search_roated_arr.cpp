#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return end;
}

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return -1;
}

int findPosition(int arr[], int n, int key)
{
    int pivot = findPivot(arr, n);
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return binarySearch(arr, n - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, key);
    }
}

int main()
{
    int arr[] = {3, 8, 10, 17, 2};

    int key = 0;

    int size = 5;

    int pivot = findPivot(arr, size);
    // cout << "Index of pivot element: " << pivot << endl;

    int binary = binarySearch(arr, size, key);
    cout << "Yes key is find";

    return 0;
}



// NOT SOLVED

