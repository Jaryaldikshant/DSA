#include <iostream>
using namespace std;

// here int start = 3 is a DEFAULT ARGUMENT
// condition: 1. always start from right most perameter (can't use default value int n = 4, before changing start prameter)
void print(int arr[], int n, int start = 3)
{

    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[5] = {1, 4, 7, 8, 9};

    // int start = 0;
    cout << "Array During default argument: " << endl;
    print(arr, 5);

    cout << endl;

    cout << "Array when start is initailized: " << endl;
    print(arr, 5, 1);

    return 0;
}