#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void heapify_Algo(int arr[], int n, int index)
{

    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[largest], arr[index]);
        heapify_Algo(arr, n, largest);
    }
}

int main()
{

    int arr[7] = {-1,50, 42, 20, 55, 52, 60};
    int n = 7;

    for (int i = n / 2 ; i > 0; i--)
    {
        heapify_Algo(arr, n, i);
    }

    cout << "Printing Heapify Algo: " << endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}