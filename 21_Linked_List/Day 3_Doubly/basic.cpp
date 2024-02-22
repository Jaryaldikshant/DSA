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

void insertHead(Node *&head, int data)
{

    Node *temp = new Node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

// inserting at tail

void insertTail(Node *&tail, int val)
{

    Node *temp = new Node(val);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    Node *head = n1;
    Node *tail = n4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    print(head);
    cout << endl;
    cout << "Length of list: " << getLength(head) << endl;

    cout << endl;
    insertHead(head, 11);
    cout << "After inserting value at head: ";
    print(head);

    cout << endl;

    insertTail(tail, 1);
    cout << "After inserting value at tail: ";
    print(head);

    return 0;
}