#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(int n, int m)
{

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;
}

void dfs(int n, vector<vector<int>> &adj, vector<int> &visited, vector<int> &list)
{

    visited[n] = 1;

    list.push_back(n);

    for (auto i : adj[n])
    {
        if (!visited[i])
        {
            dfs(i, adj, visited, list);
        }
    }
}

vector<int> dfsOfGraph(int n, vector<vector<int>> &adj)
{

    vector<int> visited(n, 0);
    vector<int> list;

    int st = 0;
    dfs(st, adj, visited, list);

    return list;
}

int main()
{

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    int m;
    cout << "enter no. of Edges: ";
    cin >> m;

    vector<vector<int>> adj = adjList(n, m);

    vector<int> res = dfsOfGraph(n, adj);

    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}