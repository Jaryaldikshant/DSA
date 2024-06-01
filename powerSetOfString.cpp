#include<bits/stdc++.h>
using namespace std;

void solve(int i, string s, string &ans){
    
    if(i == s.length()){
        cout<<ans<<" ";
        return ;
    }
    
    // picking
    ans = ans+s[i];
    solve(i+1,s,ans);
    
    // poping 
    ans.pop_back();
    solve(i+1,s,ans);
}
 
int main(){
   
   string str;
   cin>>str;
   
   string ans = "";
   solve(0,str,ans);
   
    return 0;
}