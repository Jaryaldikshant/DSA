#include <iostream>
using namespace std;
int main()
{
    /*
    int arr[10] = {23, 122, 41, 67};


    cout << "Address of First memory block is: " << arr << endl;

    cout << "Address of First memory block is: " << &arr[0] << endl;

    cout << "Value at 0th index: " << *arr << endl;

    cout << "Value: " << *arr + 1 << endl;

    cout << "Value at 1st index: " << *(arr + 1) << endl;

    cout << "Value: " << *(arr) + 1 << endl;

    cout << "Value: " << arr[2] << endl;

    cout << "Value of *(arr+i): " << *(arr + 2) << endl;

    cout << "i[arr]: " << 2 [arr] << endl;
    cout << "*(i+arr): " << *(2 + arr) << endl;


    int *p = &arr[0];
    cout<<p<<endl;
    cout<<*p<<endl;


    int temp[10] = {2,6,10};
    cout << sizeof(temp) << endl;

    cout << sizeof(*temp) << endl;

    cout << sizeof(&temp) << endl;

    int *p = &temp[0];
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(&p) << endl;


    int a[20] = {1, 2, 3, 4};

    cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl
    //      << endl;

    int *p = &a[0];

    // cout << *p << endl;
    cout << &p << endl;
    // cout << p << endl;
    */

    int arr[10];

    // error
    // arr = arr + 1;

    int *ptr = &arr[0];
cout<<ptr<<endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}