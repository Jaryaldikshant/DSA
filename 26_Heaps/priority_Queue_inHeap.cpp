#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    // max heap
    priority_queue<int> q;

    // insertion in MAX Heap
    q.push(5);
    q.push(2);
    q.push(10);
    q.push(4);
    q.push(7);

    // top element of MAX Heap
    cout << "Top Element of Max Heap: " << q.top() << endl;

    // deletion of Element of MAX Heap: it removes top element from the Heap
    q.pop();

    // size of the Max Heap
    cout << "Size of the Max Heap: " << q.size() << endl;

    // check priority queue is empty or not

    if (!q.empty())
    {
        cout << "Not Empty" << endl;
    }

    else
    {
        cout << "Empty" << endl;
    }

    cout << endl;

    // MIN Heap

    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(5);
    minheap.push(2);
    minheap.push(10);
    minheap.push(4);
    minheap.push(7);

    // top element of Min Heap
    cout << "Top Element of Min Heap: " << minheap.top() << endl;

    // deletion of Element of MIN Heap: it removes top element from the Heap
    minheap.pop();
    minheap.pop();
    minheap.pop();
    minheap.pop();
    minheap.pop();

    // size of the Min Heap
    cout << "Size of the Min Heap: " << minheap.size() << endl;

    // check priority queue is empty or not

    if (!minheap.empty())
    {
        cout << "Not Empty" << endl;
    }

    else
    {
        cout << "Empty" << endl;
    }

    return 0;
}