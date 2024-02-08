#include <iostream>
#include <vector>
using namespace std;

bool search2d(int arr[5][4], int target, int n, int m)
{
    int start = 0;

    int size = m * n;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        int row_index = mid / m;
        int col_index = mid % m;

        if (arr[row_index][col_index] == target)
        {
            cout << "Found at: " << row_index << " row"
                 << " " << col_index << " column" << endl;
            return true;
        }

        else if (arr[row_index][col_index] > target)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return false;
}

int main()
{

    int arr[5][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16},
            {17, 18, 19, 20}};

    int m = 5;
    int n = 4;

    int target;
    cout << "Enter the value you want to find: ";
    cin >> target;

    bool ans = search2d(arr, target, m, n);

    if (ans)
    {
        cout << "Found";
    }

    else
    {
        cout << "Not Found";
    }

    return 0;
}

