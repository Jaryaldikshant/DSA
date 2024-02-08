#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
    int i = n-1;
    int j = m-1;
    int k = n+m-1;
    while (i >=0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k--] = arr1[i--];
            // i++;
            // k++;
        }

        else
        {
            arr1[k--] = arr2[j--];
            // j++;
            // k++;
        }
    }

    while (i >= 0)
    {
        arr1[k--] = arr1[i--];
        // i++;
        // k++;
    }

    while (j >= 0)
    {
        arr1[k--] = arr2[j--];
        // j++;
        // k++;
    }
}

void print(int arr1[], int ans_size)
{

    for (int i = 0; i < ans_size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[100] = {1, 2, 3};
    int size1 = 3;
    int arr2[100] = {2, 5, 6};
    int size2 = 3;

    int ans_size = size1 + size2;

    merge(arr1, size1, arr2, size2);
    print(arr1, ans_size);
    return 0;
}