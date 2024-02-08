#include <iostream>
#include <limits.h>
using namespace std;

int printMax(int arr[3][3], int row, int col)
{
    int maxi = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}




int printMin(int arr[3][3], int row, int col)
{
    
    int mini = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
            
        }
    }
    return mini;
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Max Element in array: " << printMax(arr, row, col)<<endl;

    cout << "Min Element in array: " << printMin(arr, row, col)<<endl;

    return 0;
}