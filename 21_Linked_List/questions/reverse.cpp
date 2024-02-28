#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};

void reverseLink(node *&head)
{
    node *curr = head;
    node *prev = nullptr;

    while (curr != nullptr)
    {
        node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = new node(1);
    node *n1 = new node(2);
    node *n2 = new node(3);
    node *n3 = new node(4);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    cout << "Head: " << head->data << endl;
    display(head);
    cout << endl;

    reverseLink(head);
    display(head);
    cout << "Head: " << head->data << endl;

    return 0;
}