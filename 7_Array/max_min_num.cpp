#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {4, 7, 8, 6, 7, 6 };
    int size = 6;
    // initialize  the max variable with the minimum posssible integer value
    int max = INT_MIN;
    // initialize  the min variable with the maximum posssible integer value
    int min =INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            // found a number, greater  than max , update max
            max = arr[i];
        }

        if (arr[i] < min)
        {
            // found a number, smaller  than mix , update mix
            min = arr[i];
        }
        
    }

    cout << "Maximum number in array is: " << max<<endl;
     cout<<"Minimum number in array is: "<<min<<endl;


    
   
   
    return 0;
}