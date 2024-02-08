
#include <bits/stdc++.h>

using namespace std;

bool isSafe(int x, int y, vector<vector<int>> &m, int n, vector<vector<int>> &visited, vector<int> path)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<vector<int>> &ans, int x, int y, vector<vector<int>> &visited, vector<int> path)
{

    //  base case

    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // 4 choice : L, R, U, D

    // left
    int newx = x;
    int newy = y - 1;

    if (isSafe(newx, newy, m, n, visited, path))
    {
        path.push_back(1);

        solve(m, n, ans, newx, newy, visited, path);

        path.pop_back();
    }

    //  right
    newx = x;
    newy = y + 1;

    if (isSafe(newx, newy, m, n, visited, path))
    {
        path.push_back(1);

        solve(m, n, ans, newx, newy, visited, path);

        path.pop_back();
    }

    // upper

    newx = x - 1;
    newy = y;

    if (isSafe(newx, newy, m, n, visited, path))
    {
        path.push_back(1);

        solve(m, n, ans, newx, newy, visited, path);

        path.pop_back();
    }

    // down
    newx = x + 1;
    newy = y;
    if (isSafe(newx, newy, m, n, visited, path))
    {
        path.push_back(1);

        solve(m, n, ans, newx, newy, visited, path);

        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<vector<int>> ratInAMaze(vector<vector<int>> &maze, int n)
{
    // Write your code here.
    vector<vector<int>> ans;

    if (maze[0][0] == 0)
    {
        return ans;
    }

    vector<vector<int>> visited(n,vector<int>(n,0));

    int srcx = 0;
    int srcy = 0;

    vector<int> path;

    solve(maze, n, ans, srcx, srcy, visited, path);

    //   sort(ans.begin(),ans.end());

    return ans;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 1}, {1, 0, 1}, {1, 1, 1}};

    vector<vector<int>> paths = ratInAMaze(maze, 3);

    for (auto path : paths)
    {
        for (auto direction : path)
        {
            cout << direction << " ";
        }
        cout << endl;
    }

    return 0;
}
