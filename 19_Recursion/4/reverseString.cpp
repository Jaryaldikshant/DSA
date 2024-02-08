#include <iostream>
using namespace std;

void getReverse(string &str, int i, int j)
{
    cout << "Call recieved for " << str << endl;

    // base case
    if (i > j)
    {
        return;
    }

    // processing
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    getReverse(str, i, j);
}

int main()
{
    string str;
    cin >> str;
    cout << endl;
    int i = 0;
    int j = str.length() - 1;

    getReverse(str, i, j);

    cout << endl;

    cout << str << endl;

    return 0; 
}