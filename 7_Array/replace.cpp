#include <iostream>
using namespace std;
int main()
{
    int arr[ 1000];
    int n;
    cout << "How many numbers you want to add in array: ";
    cin >> n;

    cout<<"Enter the numbers: ";
    for (size_t i = 0; i < n; i++)
    {
      cin>>arr[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        arr[i]=1;
        cout<<arr[i]<<" ";
    }

    return 0;
}  