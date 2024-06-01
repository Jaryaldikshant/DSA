#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&ans,int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && ans[largest] < ans[left]){
        largest = left;
    }

    if(right < n && ans[largest] < ans[right]){
        largest = right;
    }

    if(largest != i){
        swap(ans[largest],ans[i]);
        heapify(ans,n,largest);
    }
}

vector<int> mergeBinaryHeap(vector<int> &c,int size){

    for(int i = size/2-1; i>= 0; i--){
        heapify(c,size,i);
    }

    return c;
}

int main(){
    vector<int> a = {10,5,6,2};
    vector<int> b = {12,7,9};
    vector<int> c;

    for(auto i:a){
        c.push_back(i);
    }

    for(auto i: b){
        c.push_back(i);
    }


    int size = c.size();

    mergeBinaryHeap(c,size);

    for(auto i: c){
        cout<<i<<" ";
    }
    cout<<endl;

    
return 0;
}