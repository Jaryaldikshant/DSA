
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// head is used to print from the first node of a linked list
void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);

    temp->next = head;

    head = temp;
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

int main()
{

    // creatinh a new node
    Node *node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;

    // Node *tail = node1;

    print(head);

    insertAtHead(head, 12);

    print(head);

    insertAtHead(head, 15);
    print(head);

    return 0;
}