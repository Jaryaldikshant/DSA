#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        this->data = data1;
        this->next = next1;
    }

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

Node *convert2link(vector<int> &arr)
{

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int linkLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int linkSearch(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {12, 4, 8, 6, 1};

    Node *head = convert2link(arr);

    cout << linkSearch(head, 10);

    return 0;
}