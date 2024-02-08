#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create Vector
    vector<int> arr;

    // int ans = (sizeof(arr) / sizeof(int));
    // cout << ans << endl;

    // To check the size of an array

    // Size: How many elements is stored in the array
    cout << arr.size() << endl;

    // Capacity: How many elements can be stored in the total storage of array
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(1);
    arr.push_back(3);

    // print
    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    // remove
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

}