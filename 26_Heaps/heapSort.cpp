#include <iostream>
using namespace std;

void heapify_Algo(int arr[], int n, int i)
{

    int large = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[large] < arr[left])
    {
        large = left;
    }

    if (right <= n && arr[large] < arr[right])
    {
        large = right;
    }

    if (large != i)
    {
        swap(arr[large], arr[i]);
        heapify_Algo(arr, n, large);
    }
}

void heapSort(int arr[], int n)
{

    // int size = n;
    while (n > 1)
    {
        // step 1: swap root node with last node
        swap(arr[n], arr[1]);
        // decrement the size
        n--;

        // step 2: take the new root node to the right position
        heapify_Algo(arr, n, 1);
    }
}

int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        heapify_Algo(arr, n, i);
    }

    cout << "Printing Heap Algorithm: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    heapSort(arr, n);
    cout << "Printing Heap Sort: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}