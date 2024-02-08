#include <iostream>
using namespace std;

bool ispossibleSol(int arr[], int size, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }

        else
        {
            studentCount++;

            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int size,  int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    int end = sum;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (ispossibleSol(arr, size, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
  
    // m = no. of student 2
    int m;
    cout << "Enter the no. of students";
    cin >> m;

    int book = allocateBooks(arr, size,m);
    cout << "The mininmum no. of pages from maximum no. of pages: " << book;

    return 0;
}