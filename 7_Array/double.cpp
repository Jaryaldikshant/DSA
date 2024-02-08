#include <iostream>
using namespace std;
int main()
{
    // int arr[5] = {1, 3, 5, 7, 9};
    // for (int i = 0; i < 5; i++)
    // {
    //     arr[i] = arr[i] * 2;
    //     cout << arr[i]<<" ";
    // }

    int arr[500];
    int n;
    cout << "How many numbers you want to add in array: ";
    cin >> n;

    // for taking input
    cout<<"Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for printing
    cout<<"Doubles: ";
    for (int i = 0; i < n; i++)
    {

        cout << 2 * arr[i] << " "; 
    }

    return 0;
}