#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;

        this->prev = NULL;

        this->next = NULL;
    }
};

// traversing linked list
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

// getting length of linked list
int getLength(Node *head)
{

    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// inserting at head

void insertHead(Node *&head, Node *&tail, int data)
{
    // if empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// inserting at tail

void insertTail(Node *&head, Node *&tail, int val)
{
    if (tail == NULL)
    {
        Node *temp = new Node(val);
        tail = temp;
        head = temp;
    }

    else
    {
        Node *temp = new Node(val);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// inserting at any position

void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    // if position is at start
    if (pos == 1)
    {
        insertHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertTail(head, tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{
    // Node *n1 = new Node(10);

    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    cout << endl;
    // cout << "Length of list: " << getLength(head) << endl;
    //   cout << "Head: " << head->data << endl;
    //     cout << "Tail: " << tail->data << endl;

    insertHead(head, tail, 8);
    insertHead(head, tail, 11);
    insertHead(head, tail, 22);
    insertHead(head, tail, 19);
    cout << "After inserting value at head: ";
    print(head);

    cout << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertTail(head, tail, 25);
    cout << "After inserting value at tail: ";
    print(head);

    cout << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAtPosition(head, tail, 101, 1);
    cout << "After inserting value at 1st position: ";
    print(head);
    cout << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAtPosition(head, tail, 102, 7);
    cout << "After inserting value at 7th position: ";
    print(head);
    cout << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    return 0;
}