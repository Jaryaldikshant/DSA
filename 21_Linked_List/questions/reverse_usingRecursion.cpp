
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

// using Recursion
void reverseLink(node *&head, node *&curr, node *&prev)
{  
    // base case
    if (curr == nullptr)
    {
        head = prev;
        return;
    }

    node *forward = curr->next;
    reverseLink(head, forward, curr);
    curr->next = prev;
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

    node* curr = head;
    node* prev = nullptr;

    cout << "Head: " << head->data << endl;
    display(head);
    cout << endl;

    reverseLink(head, curr,prev);
    display(head);
    cout << "Head: " << head->data << endl;

    return 0;
}