#include<iostream>
using namespace std;

int getSum(int x,int y){ // Function declaration
 
    int add = x+y;  // pass by value
    return add;
}


int main(){

    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    int sum =  getSum(a,b);   // function call

    cout<<"Addition of two numbers is: "<<sum<<endl;

    
    
return 0;
}