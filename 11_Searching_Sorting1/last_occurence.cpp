#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findOccur(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }

        // if target small ---> go left
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        // if target big ---> go right
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{2, 5, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 9, 20};
    int target = 7;

    int ans = findOccur(arr, target);
    cout << "Last Occurence: " << ans << endl;




// 2nd method
    auto ans2 = upper_bound(arr.begin(), arr.end(), target);
    cout << "ans2: " << ans2 - arr.end() << endl;

    return 0;
}