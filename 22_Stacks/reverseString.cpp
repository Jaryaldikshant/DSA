// using STL:

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Love";

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty())
    {
        // taking the top element of stack
        char ch = s.top();

        // adding this ch in ans string
        ans.push_back(ch);

        // removing the ch from stack
        s.pop();
    }

    cout << "Answer is: " << ans << endl;
    return 0;
}
