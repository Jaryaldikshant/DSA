#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;

    // XOR ALL ELEMENTS WITH ANS
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans; 
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";

    // taking input
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // for unique element
    int uniqueElement = findUnique(arr);
    cout << "Unique element is : " << uniqueElement;

    return 0;
}