#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30, 40};
    int sum = 80;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            int nex_element = arr[j] + element;

            for (int k = j + 1; k < arr.size(); k++)
            {
                if (nex_element + arr[k] == sum)
                {
                    cout << "Pair found: "
                         << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                }
            }
        }
    }

    return 0;
}