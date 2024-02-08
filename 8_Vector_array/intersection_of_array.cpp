#include <iostream>
#include <vector>   // for vector input
#include <limits.h> // for INT_MAIN

using namespace std;

int main()
{
    vector<int> arr{2, 4, 6, 3, 3, 8, 10};

    vector<int> brr{3, 4, 10};

    vector<int> ans;

    // Outer loop on arr vector

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        // for every elements, run lopp on brr
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                // mark
                brr[j] = INT_MIN; // for no repition

                ans.push_back(element);
            }
        }
    }

    // print ans
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}