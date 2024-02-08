#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        int ele = arr[mid];
        if (ele == target)
        {
            return mid;
        }

        else if (target < ele)
        {
            // search in left
            end = mid - 1;
        }

        else
        {
            // search in right
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    // element not found
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 8;

    int indexoftarget = binarySearch(arr, size, target);

    if (indexoftarget == -1)
    {
        cout << "Target not found";
    }

    else
    {
        cout << "Target found at " << indexoftarget<<" "<<"index"<< endl;
    }

    return 0;
}