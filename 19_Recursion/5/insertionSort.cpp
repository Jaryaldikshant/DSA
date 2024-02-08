#include <iostream>
using namespace std;

int insertionSort(int *arr, int n)
{
    if (n <= 1)
    {
        return 0;
    }

    insertionSort(arr, n - 1);

    int temp = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j];
        j -= 1;
    }

    arr[j + 1] = temp;
    return arr[j + 1];
}

int main()
{
    int arr[100] = {12, 45, 23, 51, 19, 8};
    int size = 6;

    int ans = insertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}