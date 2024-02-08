#include<iostream>
using namespace std;

int  getAns(int x){
    if (x%2==0)
    {
     cout<<x<<": Even";
    }

    else{
    cout<<x<<": Odd";
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    getAns(n);
     

return 0;
}