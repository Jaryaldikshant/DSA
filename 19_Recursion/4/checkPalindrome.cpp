#include <iostream>
using namespace std;

bool checkPalindrom(string str, int i, int j)
{

    // base case

    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
        return false;

    else
    {
        // Recursive call
        return checkPalindrom(str, i+1, j-1);
  
    }
}

int main()
{
    string str;
    cin >> str;

    bool isPalindrome = checkPalindrom(str, 0, str.length() - 1);

    if (isPalindrome)
    {
        cout << "It is a Palindrome" << endl;
    }

    else
    {
        cout << "It is not a Palindrome" << endl;
    }

    return 0;
}