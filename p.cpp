#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int right = 2 * i + 1;
    int left = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int> &ans, int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(ans, n, i);
    }

    while (n > 1)
    {
        swap(ans[0], ans[n-1]);
        n--;
        heapify(ans, n, 0);
    }
    // return ans;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    heapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}