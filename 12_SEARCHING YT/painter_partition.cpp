#include <iostream>
using namespace std;

bool isPossible(int arr[], int key, int size, int mid)
{
    int painterCount = 1;
    
    int paintSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (paintSum + arr[i] <= mid)
        {
            paintSum += arr[i];
        }

        else
        {
            painterCount++;
            if (painterCount > key || arr[i] > mid)
            {
                return false;
            }
            paintSum = arr[i];
        }
    }
    return true;
}

int painterPart(int arr[], int key, int size)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {

        if (isPossible(arr, key, size, mid))
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
    int arr[] = {5, 5, 5, 5};
    int size = 4;
    int key = 2;
    int ans = painterPart(arr, key, size);
    cout << ans << endl;
    return 0;
}
