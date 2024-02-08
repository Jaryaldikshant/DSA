#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<string> s;
    s.push("Dikshant");
    s.push("Jaryal");

    cout << "Top Element: " << s.top() << endl;

    s.pop();

    cout << "Top Element after poping: " << s.top() << endl;

    cout << "Size of Stack: " << s.size() << endl;

    cout << "Empty or not? " << s.empty() << endl;

    

    return 0;
}