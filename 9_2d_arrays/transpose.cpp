#include <iostream>
using namespace std;
int main()
{
    int arr[4][5];
    int row = 3;
    int col = 3 ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Transpose of Matrix: "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}