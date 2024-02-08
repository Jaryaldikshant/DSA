#include <iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {

            start = mid + 1;
        }

        else
        {
            end = mid;
        }

        mid = start + ((end - start) / 2);
    }
    return start;
}
int main()
{
    int arr[] = {1, 4, 5, 10};
    int size = 4;

    int peak = peakElement(arr, size);
    cout << "Index of Peak element of an Mountain array: " << peak << endl;

    return 0;
}