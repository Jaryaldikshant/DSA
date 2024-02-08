#include <iostream>
using namespace std;

char getMaxOcc(string s)
{
    int arr[26] = {0};

    // created an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // lower case
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }

        // upper case
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;

    for (int i = 0; i < 26; i++)
    {

        if (maxi < arr[i])
        {

            ans = i;
            maxi = arr[i];
        }
    }

    char final_ans = 'a' + ans;
    return final_ans;
}

int main()
{
    string s;
    cin >> s;

    cout << getMaxOcc(s) << endl;
    return 0;
}