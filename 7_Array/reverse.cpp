#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 9, 3, 2, 6};
    int size = 5;
    int end = size - 1;
    int start = 0;

    while (start <= end)
    {
        // step 1:
        swap(arr[start], arr[end]);

        // step 2:
        start++;

        // step 3:
        end--;
    }

    // for printing array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}