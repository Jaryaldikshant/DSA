#include<iostream>
using namespace std;

int climbStairs(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    
    int step = climbStairs(n-1)+climbStairs(n-2);
    return step;
}

int main(){
    int src = 0;
    int dest;
    cin>>dest;

    int ans = climbStairs(dest);
    cout<<ans<<endl;



return 0;
}