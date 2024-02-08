#include <iostream>
using namespace std;

void linearSearch(int arr[3][3], int row, int col, int num)
{
    bool key = false;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (num == arr[i][j])
            {
                key = true;
                break;
            }
        }
    }

    if (key == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    int num;
    cout << "Enter the number you wanna find ? " << endl;
    cin >> num;

    linearSearch(arr, row, col, num);

    return 0;
}