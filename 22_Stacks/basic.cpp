#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties

public:
    int *arr;
    int top;
    int size;

    // behaviour

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {

        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }

        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            top--;
        }

        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }

        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {

        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(4);

    st.push(22);
    st.push(34);
    st.push(12);
    st.push(77);
    // st.push(69);

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    st.pop();
    cout << st.peak() << endl;

    st.pop();

    if (st.isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }

    else
    {
        cout << "Stack is not Empty" << endl;
    }

    // // creation of stack
    // stack<int> s;

    // // push operation
    // s.push(5);

    // s.push(2);

    // // pop opearation
    // s.pop();
    // // s.pop();

    // cout << "Printing top element: " << s.top() << endl;

    // if (s.empty())
    // {
    //     cout << "Stack is Empty" << endl;
    // }

    // else
    // {
    //     cout << "Stack is not empty" << endl;
    // }

    // cout << "Size of Stack is: " << s.size() << endl;

    return 0;
}