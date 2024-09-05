// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
    
    public:
    unordered_map<int,list<int>> adj;
    
    void addEdge(int edg1, int edg2, bool direct){
        
        // direction = 0 -> undirected graph
        
        // direction = 1 -> directed graph
        
        
        // create an edge from eg1 to edg2
        adj[edg1].push_back(edg2);
        
        if(direct == 0){
            adj[edg2].push_back(edg1);
        }
    }
    
    void Print(){
        
        for(auto i: adj){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
    
};

int main() {
    
    int n;
    cout<<"Enter the number of Nodes: ";
    cin>>n;
    
    int m;
    cout<<"Enter the number of Edges: ";
    cin>>m;
    
    graph g;
    
    for(int i = 0 ; i<m; i++){
        int edg1,edg2;
        cin>>edg1>>edg2;
        
        // creating undirected graph
        g.addEdge(edg1,edg2,0);
    }
    
    
    g.Print();
   

    return 0;
}