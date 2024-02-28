#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory Free for Node with data " << value << endl;
    }
};

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

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *insert = new Node(d);
        head = insert;
        tail = insert;
    }

    else
    {
        Node *insert = new Node(d);
        insert->next = head;
        head->prev = insert;
        head = insert;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *insert = new Node(d);
        tail = insert;
        head = insert;
    }

    else
    {
        Node *insert = new Node(d);
        tail->next = insert;
        insert->prev = tail;
        tail = insert;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *newNum = new Node(data);
    newNum->next = temp->next;
    temp->next->prev = newNum;
    temp->next = newNum;
    newNum->prev = temp;
}

void deleteNode(Node *&head, int position)
{

    // if psotion is at head
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {

        Node *cur = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 11);
    insertAtHead(head, tail, 13);
    insertAtHead(head, tail, 100);
    insertAtHead(head, tail, 8);
    insertAtHead(head, tail, 101);
    print(head);

    insertAtTail(head, tail, 25);
    print(head);

    insertAtPosition(head, tail, 102, 7);
    print(head);

    deleteNode(head, 7);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}