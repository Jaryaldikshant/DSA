#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6: " << binary_search(v.begin(), v.end(), 6) << endl;

    // lower bound: first occurence of target element
    cout << "Lower Bound position: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // upper bound: first occurence of element greater than target element
    cout << "Upper Bound position: " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;


// to max & min 
    int a = 3;
    int b = 5;

    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;


// to swap any two numbers
    swap(a, b);
    cout << "New value of a: " << a << endl;
    cout << "New value of b: " << b << endl;


// to reverse the string 
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "String: " << s << endl;


// to ratate an vector 
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotation: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;


// sorting:  based on 'Intro sort'  = (quick sort + heap sort + insertion sort)

sort(v.begin(),v.end());
cout<<"After sorting: ";
  for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}