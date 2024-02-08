#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> ans(vector<int> arr1, vector<int> arr2)
{
    set<int> n;

    for (int i = 0; i < arr1.size(); i++)
    {
        n.insert(arr1[i]);
    }
    for (int j = 0; j < arr2.size(); j++)
    {
        n.insert(arr2[j]);
    }

    vector<int> ans_arr(n.begin(), n.end());

    return ans_arr;
}

int main()
{

    vector<int> arr1{1, 3, 5, 9};
    vector<int> arr2{2, 4, 6, 8, 10};

    vector<int> ans_arr = ans(arr1, arr2);

    for (auto value : ans_arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}