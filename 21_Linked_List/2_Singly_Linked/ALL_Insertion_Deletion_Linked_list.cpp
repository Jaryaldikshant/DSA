#include <iostream>
using namespace std;
class Node
{
public:
    int data;

    // address of next Node store in this next
    Node *next;

    // creating constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void TraverseLink(Node *head)
{
    Node *temp = head;
    // Node*mover = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertLink(int data, Node *&head, int pos)
{
    Node *add = new Node(data);

    // if position is zero means you have insert in at head, we will store the addrss of head in add(next) and change the head to newhead which is add
    if (pos == 1)
    {
        add->next = head;
        head = add;
        return;
    }

    Node *prev = head;

    for (int i = 1; i < pos - 1; i++)
    {
        prev = prev->next;
    }

    add->next = prev->next;
    prev->next = add;
}

void deleteLink(Node *&head, int pos)
{

    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *prev = head;

    for (int i = 1; i < pos; i++)
    {
        prev = prev->next;
    }
    Node *temp = prev->next;
    prev->next = temp->next;
    delete temp;
}

int main()
{

    Node *n1 = new Node(3);
    Node *n2 = new Node(1);
    Node *n3 = new Node(5);
    Node *n4 = new Node(8);
    // Node *n5 = new Node(50);
    // Node *n6 = new Node(-1);

    Node *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    // n5->next = NULL;
    // n6->next = NULL;

    cout << "Traversing Linked list: ";
    TraverseLink(head);
    cout << endl
         << endl;

    // this function is used for inserting Node at given position (here 50 is the node and 2 is the position)

    insertLink(10, head, 1);
    cout << "Inserting in Linked list:  ";
    TraverseLink(head);
    cout << endl
         << endl;

    deleteLink(head, 2);
    cout << "Deleting in Linked list: ";
    TraverseLink(head);
    cout << endl
         << endl;

    return 0;
}