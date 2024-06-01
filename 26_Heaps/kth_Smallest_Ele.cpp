
// can also be done by using array : sort and then return arr[k-1]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kElement(int arr[], int k, int size)
{

    priority_queue<int> h;

    // step 1: store first k elements in Max Heap
    for (int i = 0; i < k; i++)
    {
        h.push(arr[i]);
    }

    // step 2: for rest k elements

    for (int i = k; i < size; i++)
    {
        if (arr[i] < h.top())
        {
            h.pop();
            h.push(arr[i]);
        }
    }

    //  step 2: ans = h.top();
    int ans = h.top();
    return ans;
}

int main()
{

    int arr[5] = {7, 10, 15, 13, 25};
    int size = 5;

    int k;
    cout << "Enter Kth smallest element you want to find: " << endl;
    cin >> k;

    cout << "Kth Smallest Element in Heap: " << kElement(arr, k, size);

    return 0;
}