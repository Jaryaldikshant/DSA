#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d, Node *n)
    {
        data = d;
        next = n;
    }

    Node(int data1)
    {
        this->data = data1;
        this->next = NULL;
    }
};

Node *convertLink(vector<int> &arr)
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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head); 
    return temp;
}

int main()
{
    vector<int> arr = {2, 6, 1, 8};

    Node *head = convertLink(arr);

    head = insertHead(head, 50);

    print(head);

    return 0;
}