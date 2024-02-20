#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);

    temp->next = head;

    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;

    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insertAtmiddle(Node *&head, int position, int d)
{
    // inserting at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }


    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // creating an node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtTail(tail, 12);

    print(head);

    insertAtTail(tail, 15);

    print(head);

    insertAtmiddle(head, 4, 22);

    print(head);

    return 0;
}