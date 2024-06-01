
// class Solution
// {

// private:
//     bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
//     {

//         if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
//         {
//             return true;
//         }

//         else
//         {
//             return false;
//         }
//     }

//     void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
//     {

//         // we have reached x, y here

//         // base case
//         if (x == n - 1 && y == n - 1)
//         {
//             ans.push_back(path);
//             return;
//         }

//         visited[x][y] = 1;

//         // 4 choice :  D, L, U, R

//         // down
//         int newx = x + 1;
//         int newy = y;

//         if (isSafe(newx, newy, n, visited, m))
//         {

//             path.push_back('D');

//             solve(m, n, ans, newx, newy, visited, path);

//             // backtrack
//             path.pop_back();
//         }

//         // left

//         newx = x;
//         newy = y - 1;

//         if (isSafe(newx, newy, n, visited, m))
//         {
//             path.push_back('L');

//             solve(m, n, ans, newx, newy, visited, path);

//             path.pop_back();
//         }

//         // right

//         newx = x;
//         newy = y + 1;

//         if (isSafe(newx, newy, n, visited, m))
//         {
//             path.push_back('R');

//             solve(m, n, ans, newx, newy, visited, path);

//             path.pop_back();
//         }

//         //  up
//         newx = x - 1;
//         newy = y;

//         if (isSafe(newx, newy, n, visited, m))
//         {
//             path.push_back('U');

//             solve(m, n, ans, newx, newy, visited, path);

//             path.pop_back();
//         }

//         visited[x][y] = 0;
//     }

// public:
//     vector<string> findPath(vector<vector<int>> &m, int n)
//     {
//         // Your code goes here
//         vector<string> ans;

//         if (m[0][0] == 0)
//         {
//             return ans;
//         }

//         int srcX = 0;
//         int srcY = 0;

//         vector<vector<int>> visited = m;

//         // initialize with 0
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 visited[i][j] = 0;
//             }
//         }

//         string path = "";

//         solve(m, n, ans, srcX, srcY, visited, path);

//         sort(ans.begin(), ans.end());

//         return ans;
//     }
// };



#include <bits/stdc++.h>
using namespace std;

bool isSafe(int newx, int newy, vector<vector<bool>> &vis, vector<vector<int>> &arr, int n)
{
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && (vis[newx][newy] == false) && (arr[newx][newy] == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &vis, string path)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // 4 Movement are there D, L, R, U
    vis[x][y] = true; // Corrected from `==` to `=`

    // if Down
    if (isSafe(x + 1, y, vis, arr, n))
    {
        solve(x + 1, y, arr, n, ans, vis, path + 'D');
    }

    // if Left
    if (isSafe(x, y - 1, vis, arr, n))
    {
        solve(x, y - 1, arr, n, ans, vis, path + 'L');
    }

    // if Right
    if (isSafe(x, y + 1, vis, arr, n))
    {
        solve(x, y + 1, arr, n, ans, vis, path + 'R');
    }

    // if Up
    if (isSafe(x - 1, y, vis, arr, n))
    {
        solve(x - 1, y, arr, n, ans, vis, path + 'U');
    }

    vis[x][y] = false; // Corrected from `= 0` to `= false`
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    // for storing the answer
    vector<string> ans;

    // array to check the visited path
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    // empty string path
    string path = "";

    // if starting position is 0
    if (arr[0][0] == 0)
    {
        return ans;
    }

    // function call
    solve(0, 0, arr, n, ans, visited, path);

    return ans;
}

int main()
{
    // Example usage
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}};

    int n = maze.size();
    vector<string> paths = searchMaze(maze, n);

    for (const string &path : paths)
    {
        cout << path << endl;
    }

    return 0;
}
