#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;

    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;

}

vector<int> sumArray(vector<int> arr1, int n, vector<int> arr2, int m)
{

    int i = n - 1; // Showing that they are the last element of an array
    int j = m - 1;

    vector<int> ans;

    int carry = 0;
    int sum = 0;

    while (i >= 0 && j >= 0)
    {

        int val1 = arr1[i];
        int val2 = arr2[j];

        sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
    }

    // 2nd Case
    while (j >= 0)
    {

        sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        j--;
    }

    // 3rd Case

    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

   return ans;

    
}

int main()
{



    vector<int> arr1{1, 2, 3, 4};
    int size1 = 4;

    vector<int> arr2{6};
    int size2 = 1;

    vector<int> ans = sumArray(arr1, size1, arr2, size2);
   ans = reverse(ans);

   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
   cout<<endl;
   

    return 0;
}