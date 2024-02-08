//  LET draw the graph from the numbers in an array(which is sorted and then rotated) , the minimum value of the graph called --> PIVOT ELEMENT

#include <iostream>
using namespace std;
int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + ((e - s) / 2);

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + ((e - s) / 2);
    }
    return arr[s];
}

int main()
{
    int arr[] = {1, 3, 5, 6, 6, 7};

    cout << "Pivot element: " << getPivot(arr, 6) << endl;
    return 0;
}