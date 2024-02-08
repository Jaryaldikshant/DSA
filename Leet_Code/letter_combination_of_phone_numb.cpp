#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int i, vector<string> &ans, string *st)
{

    // base case
    if (i >= str.length())
    {
        ans.push_back(output);
        return;
    }

    int num = str[i] - '0';
    string value = st[num];

    for (int j = 0; j < value.length(); j++)
    {
        output.push_back(value[j]);

        solve(str, output, i + 1, ans, st);

        // backtrack
        output.pop_back();
    }
}

int main()
{

    string str;
    cin >> str;

    // string length = str.length();

    vector<string> ans;

    if (str.length() == 0)
    {
        return 0;
    }

    string output;

    int index = 0;

    //  creating an string arr for mapping
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(str, output, index, ans, mapping);

    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << endl;
    }

    return 0;
}