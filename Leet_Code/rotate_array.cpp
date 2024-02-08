#include <iostream>
using namespace std;

int rotateArray(int arr[], int k, int size)
{

    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }

    arr = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int k;
    cout << "Enter no. of steps u wanna rotate array: ";
    cin >> k;

    rotateArray(arr, k, size);

    return 0;
}