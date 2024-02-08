#include <iostream>
using namespace std;
int main()
{

    // Delcaring an array
    // int arr[7];
    // cout << "Array created successfuly\n";
    // cout << arr << endl;
    // cout << &arr << endl;

    // Intialization of array
    // int arr[] = {2, 4, 6, 8, 10};
    // cout << arr[0] << endl;
    // cout << arr[3] << endl
    //      << endl;

    // for printing all value
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    // cout << "Array intialize successfully";



    int arr[10];
    cout << "Enter the input values in array: " << endl;
    // taking input in array
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }


    cout << "Printing the values in array: " << endl;
    // printing
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    

    return 0;
}