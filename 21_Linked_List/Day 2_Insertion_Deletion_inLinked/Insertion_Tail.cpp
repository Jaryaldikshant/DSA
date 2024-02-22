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

Node *insertTail(Node *head, int ele)
{
    if (head == NULL)
    {
        return new Node(ele);
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(ele);
    temp->next = newNode;
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 3, 1};

    Node *head = convertLink(arr);

    head = insertTail(head, 100);
    print(head);

    return 0;
}