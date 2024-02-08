#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

    //  find pivot
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // placing pivot at right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // now left and right part

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int st, int ed)
{

    // base case
    if (st >= ed)
    {
        return;
    }

    // now partition
    int p = partition(arr, st, ed);

    // left part sort
    quickSort(arr, st, p - 1);

    // right part sort
    quickSort(arr, p + 1, ed);
}

int main()
{
    int arr[100] = {2, 4, 1, 6, 9};
    int size = 5;

    int st = 0;
    int ed = size - 1;

    quickSort(arr, st, ed);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}