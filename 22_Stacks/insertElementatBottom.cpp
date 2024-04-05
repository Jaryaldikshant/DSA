#include <iostream>
#include <stack>
using namespace std;

void displayStack(stack<int> st)
{
    stack<int> temp = st;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &st, int n)
{

    if (st.empty())
    {
        st.push(n);
    }

    else
    {

        int num = st.top();
        st.pop();

        insertAtBottom(st, n);

        st.push(num);
    }
}

int main()
{

    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);

    displayStack(st);

    int n;
    cout << "Enter value u want to add at bottom of stack: ";
    cin >> n;

    insertAtBottom(st, n);

    displayStack(st);

    return 0;
}