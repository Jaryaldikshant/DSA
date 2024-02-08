#include <iostream>
using namespace std;

void moveZeroes(int arr1[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
  
        if (arr1[j] != 0)
        {
            swap(arr1[j], arr1[i]);
            i++;
        }
    }
}

void print(int arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[100] = {0, 1, 0, 3, 12};
    int size1 = 5;

    moveZeroes(arr1, size1);
    print(arr1, size1);
    return 0;
}