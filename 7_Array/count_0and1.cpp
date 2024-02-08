#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 1, 0, 1,1,1,1,1,0,0,0,0,0, 1, 1, 0, 0};
    int size = 18;
    int numZero = 0;
    int numOne = 0; 

    for (int i = 0; i < size; i++)
    {
        // If zero found , increment numZero
        if (arr[i] == 0)
        {
            numZero++;
        }

        // If one found , increment numOne
        if (arr[i] == 1)
        {
            numOne++;
        }
    }
    cout << "Number of 0's: " << numZero<<endl;

    cout << "Number of 1's: " << numOne<<endl;

    return 0;
}