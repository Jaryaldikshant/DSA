#include <iostream>
#include <stack>
using namespace std;

void displayStack(const stack<int> &st)
{
    stack<int> temp = st; // Make a copy of the original stack

    // Move elements to temporary stack (reverse order)
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void solve(stack<int> &st, int count, int size)
{

    // base case
    if (count == size / 2)
    {
        st.pop();
        return;
    }

    // store the top element of stack
    int num = st.top();

    // pop temporary
    st.pop();

    // recursive call
    solve(st, count + 1, size);

    // after recursive call push the strored top element
    st.push(num);
}

void deleteMiddle(stack<int> &st, int n)
{
    int count = 0;
    solve(st, count, n);
}
int main()
{

    stack<int> st;

    st.push(3);
    st.push(5);
    st.push(9);
    st.push(2);
    st.push(4);

    deleteMiddle(st, 4);

    displayStack(st);

    return 0;
}