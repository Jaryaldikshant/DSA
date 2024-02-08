#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector<vector<int>> arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{2, 6, 8};
    // vector<int> c{1, 7, 3};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    
    // for (int i = 0; i < arr.size(); i++)
    // {
        // Here arr[i].size() is used because even if no. of rows != no. of columns all the elements is going to print

        //But if arr[i].size is not used in inner loop then it will print same no. of columns with same no. of rows all elements is not printed

    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int row = 5;
    int col = 5;

    vector<vector<int>> arr(5, vector<int>(5, -8));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[2][3] << " ";
        }
        cout << endl;
    }

    return 0;
}