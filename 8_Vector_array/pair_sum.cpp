#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr{1,3,5,7,2,6,4};
    int sum = 9;
    

    // outer loop will traverse for each elements
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        
    // for every element, will traverse on next elements
        for (int j = i+1; j <arr.size(); j++)
        {
            if (element+arr[j]==sum)
            {
                cout<<"Pair found: "<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
            
        }
        
    }


    
return 0;
}