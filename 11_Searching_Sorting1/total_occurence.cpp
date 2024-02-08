#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else if (target < arr[mid])
        {

            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else if (target < arr[mid])
        {

            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    vector<int> arr{2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 8, 10};

    int target = 4;

    int first = firstOccur(arr, target);
    cout << "First Occurence: " << first << endl;

    int last = lastOccur(arr, target);
    cout << "Last Occurence: " << last << endl;

    int total = last - first + 1;
    cout << "Total Occurence: " << total << endl;

    return 0;
}
