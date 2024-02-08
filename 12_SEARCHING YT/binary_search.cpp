#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end-start)/ 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + ((end-start)/ 2);
    }
    return -1;
}

int main()
{

    int evenarr[5] = {2, 4, 6, 8, 10};
    int oddarr[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(evenarr, 5, 8);
    cout << "The index of 8: " << evenIndex << endl;

    int oddIndex = binarySearch(oddarr, 5, 9);
    cout << "The index of 9: " << oddIndex << endl;

    return 0;
}