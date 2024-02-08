#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>> &ans)
{

    //  base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, index + 1, ans);

        //  backtracking

        swap(nums[index], nums[j]);
    }
}

int main()
{

    vector<int> nums = {2, 3};

    vector<vector<int>> ans = {};

    int index = 0;

    solve(nums, index, ans);

    for (int i = 0; i < ans.size(); i++)
    {

        for (int k = 0; k < ans[i].size(); k++)
        {
            cout << ans[i][k] << " ";
        }
    }
    cout << endl;

    return 0;
}