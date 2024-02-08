#include <iostream>
using namespace std;

void col_wiseSum(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;

    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;

    col_wiseSum(arr, row, col);

    return 0;
}