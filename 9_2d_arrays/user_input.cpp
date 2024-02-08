#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    

    // Row-Wise input
    cout << "Enter the elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    
    cout << "Printing Row-wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing Column-wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}