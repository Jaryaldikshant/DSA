
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    // left part array length
    int size1 = mid - s + 1;
   
    // right part array length
    int size2 = e - mid;

    // creating 2 new arrays
    int *arr1 = new int[size1];
    int *arr2 = new int[size2];

    // copying values into 2 new arrays
    int mainIndex = s;

    for (int i = 0; i < size1; i++)
    {
        arr1[i] = arr[mainIndex++];
    }

    for (int i = 0; i < size2; i++)
    {
        arr2[i] = arr[mainIndex++];
    }

    // using merge sorted algorithm
    mainIndex = s;  // Reset mainIndex here

    int index1 = 0;
    int index2 = 0;

    while(index1 < size1 && index2 < size2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainIndex++] = arr1[index1++];
        }
        else
        {
            arr[mainIndex++] = arr2[index2++];
        }
    }

    while (index1 < size1)
    {
        arr[mainIndex++] = arr1[index1++];
    }

    while (index2 < size2)
    {
        arr[mainIndex++] = arr2[index2++];
    }

    // Free the dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
}

void sortArr(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part sort....
    sortArr(arr, s, mid);

    // right part sort...
    sortArr(arr, mid + 1, e);

    // merging 2 arrays
    merge(arr, s, e);
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int size = arr.size();

    sortArr(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}