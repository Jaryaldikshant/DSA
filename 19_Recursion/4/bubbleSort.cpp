#include<iostream>
using namespace std;
void sortArray(int *arr,int size){

// base case -- already sorted
    if(size==0 || size==1){
        return ;
    } 

// 1 case solve krlia -- largest element ko end me rakh dega
    for(int i = 0; i< size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        } 
    }

// recursive call -- baki yeah dekh lega
    sortArray(arr,size-1);


}

int main(){
    int arr[10] = {2,5,1,6,9};

    sortArray(arr,5);

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}