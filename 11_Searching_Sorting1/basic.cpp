#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 7;

    if (binary_search(v.begin(), v.end(),5))
    {
        cout << "found" << endl;
    }

    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}