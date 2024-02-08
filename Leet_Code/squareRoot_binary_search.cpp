// long long int is used here because if value of key is 2^31 then it will give error such long number can't be stored in int so.....

#include<iostream>
using namespace std;

// This part is for int part of sqrt
long long int sqrtInt( int key){
    int start = 0;
    int end = key;
    long long int mid = start+((end-start)/2);

    long long int ans = -1;
    while(start<=end){

        if((mid*mid) == key){
            return mid;
            
        }
        
        else if((mid*mid) < key){
            ans = mid;
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = start+((end-start)/2);

    }
    return ans;
}



// This part is for float part of sqrt
double morePrecious(int n , int precious, int tempSol){
    double factor= 1;
    double ans = tempSol;
    for(int i = 0;i<precious;i++){
        factor = factor/10;
        for(double j = ans; (j*j)<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}
   
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int tempSol = sqrtInt(n);
    cout<<"Ans: "<<morePrecious(n,3,tempSol);
return 0;
}
