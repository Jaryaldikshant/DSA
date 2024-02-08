#include <iostream>
using namespace std;

// int getSum(int *arr, int n)
// {

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }

//     return sum;
// }

int main()
{

//     // char ch = 'q';

//     // cout << sizeof(ch) << endl;

//     // char *c = &ch;

//     // cout << sizeof(c) << endl;

//     int n;
//     cin >> n;

//     // Creating a variable size array using HEAP memory 
//     int *arr = new int[n];

//     // taking input in array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);

//     cout << "Answer is: " << ans << endl;


// // Case1 IN Static Memory
// while(true){
//     int i = 5;

// }

// Case 2 IN Dynamic Memory
    while(true){
        int *ptr = new int;
        delete ptr;
    }

    return 0;
}