#include <iostream>
#include <stack>
using namespace std;

bool validPranthesis(string &str)
{

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {

        char ch = str[i];

        // if opening bracket : push in stack

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }

        // if closing bracked : check stack top and pop

        else
        {

            if (s.empty())
            {
                return false;
            }

            char top = s.top();

            if (ch == ')' && top != '(' ||
                ch == '}' && top != '{' ||
                ch == ']' && top != '[')
            {
                return false;
            }

            s.pop();
        }
    }
    return s.empty();
}

int main()
{

    string str = "{[()]}";

    if (validPranthesis(str))
    {
        cout << "Valid Parentheses\n";
        return 0;
    }
    else
    {
        cout << "Invalid Parentheses\n";
        return -1;
    }

    return 0;
}