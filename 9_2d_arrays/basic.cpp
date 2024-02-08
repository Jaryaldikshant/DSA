#include <iostream>
using namespace std;
int main()
{

    // Declaring 2-D array
    int arr[3][3];

    // intialisation
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // cout << brr[2][0] << endl;

    // row-wise print
    // outer loop
    for (int i = 0; i < 3; i++)
    {
       
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // column-wise print
    // outer loop
    for (int i = 0; i < 3; i++)
    {
    
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}