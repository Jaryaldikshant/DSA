#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == element)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (element > arr[mid])
        {
            start = mid + 1;
        }

        else if (element < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int lastOccur(int arr[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = 0;

    while (start <= end)
    {
        if (element == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        else if (element > arr[mid])
        {
            start = mid + 1;
        }

        else if (element < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return ans;
}

int main()
{
    int arr[] = {1,2,3,3,3,3,5};
    int size = 7;
    // int element = 4;

    int first = firstOccur(arr, size, 3);
    cout << "The First Index of element: " << first << endl;

    int last = lastOccur(arr, size, 3);
    cout << "The last Index of element: " << last << endl;
 
    int total = last - first + 1;
    cout << "The Total occurence of element: " << total << endl;

    return 0;
}