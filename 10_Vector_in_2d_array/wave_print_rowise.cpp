#include <iostream>
#include <vector>
using namespace std;

void waveprintRowise(vector<vector<int>> v)
{
    int m = v.size();    // row size
    int n = v[0].size(); // col size

    for (int startrow = 0; startrow < m; startrow++)
    {
        // even row --> left to right
        if ((startrow % 2) == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[startrow][i] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << v[startrow][i] << " ";
            }
        }
    }
}

int main()
{

    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    waveprintRowise(v);

    return 0;
}