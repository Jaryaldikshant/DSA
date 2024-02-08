#include <iostream>
#include <array>

using namespace std;
int main()
{

    // int basic[3] = {2,4,6};

    array<int, 5> a = {1, 3, 5, 7, 9};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index: " << a.at(2) << endl; // "at" operation used for finding the element at the index 

    cout << "Empty or Not : " << a.empty() << endl; // "empty" operation will check the array is empty or not and return ans in  boolean 

    cout<<"First Element of an array: "<<a.front()<<endl;

    cout<<"Last Eleme nt of an array: "<<a.back()<<endl;

    return 0;
}