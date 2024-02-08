#include <iostream>
using namespace std;

bool find(int arr[], int size, int ele)
{
    // Linear Search

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int size = 5;

    cout << "Enter the element to find: " << endl;
    int ele;
    cin >> ele;

    if (find(arr, size, ele))
    {
        cout << "Found: " << endl;
    }

    else{
        cout << "Not Found: " << endl;
    }

// int main()
// {

//     int arr[] = {1, 3, 5, 7, 9};
//     int size = 8;
//     int key = 7;
//     bool flag = 0;

//     // 0 --> Found
//     // 1 --> Not Found

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag)

//         cout << "Present" << endl;

//     else

//         cout << "Absent" << endl;

    return 0;
}