// Implemetation of Graphs using Adjacency List

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class graph
{

public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {

        // direction = 0; Undirected Graph
        // direction = 1; Directed Graph

        // create an edge from u to v

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{

    int n;
    cout << "Enter no. of Nodes: ";
    cin >> n;

    cout << endl;
    int m;
    cout << "Enter no. of Edges: ";
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    cout << endl;

// printing Graph
    g.printAdjList();

    return 0;
}