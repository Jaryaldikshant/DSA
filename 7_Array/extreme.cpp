#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 2, 3, 57, 9};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }

        else
        {
            cout << arr[start] << " ";

            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
    return 0;
}