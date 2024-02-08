#include <iostream>
#include <vector>
using namespace std;


int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int sizea = 5;

    int brr[] = {6, 7, 4, 9};
    int sizeb = 4;

    vector<int> ans;

    // Elements of arr
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    // Elements of brr
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    // print ans
    cout << "Printing ans array: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }


    return 0;
}
