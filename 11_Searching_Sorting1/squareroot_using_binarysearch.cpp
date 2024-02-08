#include<iostream>
#include<vector>
using namespace std;

int findSquare_Root(int n){
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){

        if (mid*mid==target)
        {
            return mid;
        }

        else if (target>mid*mid)
        { 
            // ans store
            ans = mid;
            // right search
            start = mid+1;
        }
         else{
            // left search
            end = mid-1;
         }
        // updating mid
         mid = start + (end-start)/2;
    }
    return ans;

}



int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int ans = findSquare_Root(n);

    cout<<"The Square Root of a number: "<<ans<<endl;



// for float part of answer
    int precision;
    cout<<"Enter the number of floating digits upto which point: ";
    cin>>precision;

    double step = 0.1;
    double finalans = ans;
    for (int i = 0; i <precision; i++)
    {
        for (double j = finalans; j*j<=n; j = j+ step )
        {
           finalans = j;
        }
        step = step/10;
    }
    cout<<"Final ans: "<<finalans<<endl;
    

return 0;
}