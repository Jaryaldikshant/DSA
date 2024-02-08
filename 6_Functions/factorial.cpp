#include<iostream>
using namespace std;

int factorial(int x){
    if (x==1 || x==0)
    {
        return 1;
    }
    else{
        int factAns = x*factorial(x-1);
        return factAns;
    }
    
}


int main(){
    int n;
    cin>>n;
    int fact = factorial(n);
    cout<<fact;
   
    
    return 0;
}