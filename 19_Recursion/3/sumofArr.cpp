#include <iostream>
using namespace std;

int arrSum(int *arr, int n)
{

    // base condition
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return arr[0];
    }


    int remainigPart = arrSum(arr+1,n-1);
    int sum = arr[0]+remainigPart;
    return sum;
}

int main()
{
    int arr[100];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = arrSum(arr, size);

    cout << "Sum of arr: " << ans << endl;
    return 0;
}