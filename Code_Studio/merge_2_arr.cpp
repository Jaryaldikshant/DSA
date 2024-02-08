#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0; // first inddex of arr1

    int j = 0; // first index of arr2

    int k = 0; // first index of arr3

    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            // k++; 
            // i++;
        }

        else if (arr1[i] > arr2[j])
        {
            arr3[k++] = arr2[j++];
            // k++;
            // j++;
        }
    }

    // copy kth element of first array
    while (i < n)
    {
        arr3[k++] = arr1[i++];
       
    }

    // copy kth element of second array

    while (j < m)
    {
        arr3[k++] = arr2[j++];
       
    }
}


void print(int ans[],int n){
    for(int i = 0;i<n ;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}