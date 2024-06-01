#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minCost(vector<int> &arr, int size)
{
    priority_queue<int,vector<int>,greater<int>> q;
   int cost = 0;

   for(int i = 0; i<size;i++){
    q.push(arr[i]);
   }

   while(q.size() > 1){
    int a = q.top();
    q.pop();

    int b = q.top();
    q.pop();

    int sum = a+b;

    cost += sum;

    q.push(sum);
    
   }

   return cost;
}

int main()
{

    vector<int> arr;
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Minimum Cost of Ropes is: " << minCost(arr, n);

    return 0;
}