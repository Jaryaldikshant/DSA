#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> v;

    vector<int> a(5, 1); // Here '5' is the isze of the vector and '1' the element that is present in the vector

    cout << "Print a: ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // To copy an array in other array we use last "THIS SHOULD BE UNDER THE INTIALIZTION OF AN VECTOR ARRAY"

    vector<int> last(a);
    cout << "Print last: ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

// size tell us about the number of elements

    // capacity tell us about the space assign to an element





    // To check the capacity of an  vector array
    cout << "Capacity: " << v.capacity() << endl;
    




    // To Insert in the array
    v.push_back(10);

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(20);

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(30);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;



    // To Check the element of an index
    cout << "Element at 2nd Index: " << v.at(2) << endl;

    cout << "First Element of an array: " << v.front() << endl;

    cout << "Last Element of an array: " << v.back() << endl;



    // To remove the element of an array here only the last elemenet of an array will be removed
    v.pop_back();

    cout << "After Pop" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;


    

    // To clear the array here only the size will be clear

    cout << "Before Clear size will be: " << v.size() << endl;

    // When we use "clear" operation then only size will be zero not the capacity

    v.clear();

    cout << "After clear size will be: " << v.size() << endl;
    return 0;
}