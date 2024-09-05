// When no. of Nodes and Edges are given

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class graph
// {
// public:
//     vector<int> bfs(int n, vector<int> adj[])
//     {
//         vector<int> visited(n, 0);
//         vector<int> solve;

//         queue<int> q;

//         q.push(0);

//         visited[0] = 1;

//         while (!q.empty())
//         {
//             int node = q.front();
//             q.pop();

//             solve.push_back(node);

//             for (auto i : adj[node])
//             {
//                 if (!visited[i])
//                 {
//                     visited[i] = 1;

//                     q.push(i);
//                 }
//             }
//         }
//         return solve;
//     }
// };

// int main()
// {

//     graph g;

//     int n;
//     cout << "Enter no. of nodes: ";
//     cin >> n;

//     int m;
//     cout << "Enter no. of Edges: ";
//     cin >> m;

//     vector<int> adj[n];

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<int> result = g.bfs(n, adj);

//     cout << "BFS Traversal of Starting node 0: ";
//     for (auto i : result)
//     {
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
// }

// When only no. of Nodes are given

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adjList(int n){
//     vector<vector<int>> adj(n);

//     for(int i = 0; i<n; i++){
//         int u,v;
//         cin>>u>>v;

//         adj[u].push_back(v);
//         // if undirected graph is there
//         // adj[v].push_back(u);
//     }

//     return adj;
// }

// vector<int> bfs(int n, vector<vector<int>> &adj){

//     vector<int> visited(n,0);
//     vector<int>ans;

//     queue<int>q;
//     q.push(0);

//     visited[0] = 1;

//     while(!q.empty()){

//         int node = q.front();
//         q.pop();

//         ans.push_back(node);

//         for(auto i: adj[node]){
//             if(!visited[i]){
//                 visited[i] = 1;
//                 q.push(i);
//             }
//         }
//     }

//     return ans;
// }

// int main(){

//     int n;
//     cout<<"Enter no. of nodes: ";
//     cin>>n;

//     vector<vector<int>>adj = adjList(n);

//     vector<int>res = bfs(n,adj);

//     for(auto i: res){
//         cout<<i<<" ";
//     }

//     cout<<endl;

// return 0;
// }

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(int n,int m)
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

vector<int> Bfs(int n, vector<vector<int>> &adj)
{

    vector<int> visited(n, 0);
    vector<int> ans;

    queue<int> q;
    q.push(0);

    visited[0] = 1;

    while (!q.empty())
    {

        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter no. of Nodes: ";
    cin >> n;

    int m;
    cout<<"enter no. of Edges: ";
    cin>>m;

    vector<vector<int>> adj = adjList(n,m);

    vector<int> res = Bfs(n, adj);

    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}