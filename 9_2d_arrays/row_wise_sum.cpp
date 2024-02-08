#include <iostream>
using namespace std;

void printRowwise_sum(int arr[4][4], int row, int cols)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[4][4];
    int row = 4;
    int cols = 4;

    cout << "Enter the elements: ";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    printRowwise_sum(arr, row, cols);

    return 0;
}