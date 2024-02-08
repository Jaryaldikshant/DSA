#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    // p = p + 1;
    // cout << "Address of p in the update function: " << p << endl;

    *p = *p + 1;
}

int getsum(int *arr, int n)
{

    cout << endl
         << "Size of: " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    // int val = 5;
    // int *p = &val;

    // // print(p);

    // cout << "Before: " << *p << endl;
    // update(p);
    // cout << "After: " << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5, 10};

    cout << "Sum is: " << getsum(arr+3, 3) << endl;

    return 0;
}