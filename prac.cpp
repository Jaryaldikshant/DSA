#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

node* deleteNode(node *&head, int val)
{
    // node *temp = new node(val);
    node *curr = head;
    node*prev = nullptr;


    if(head == nullptr){
        return head;
    }

    if(head->data == val){
        node* temp = head;
        head  = temp->next;
        delete (temp);
        return head;
    }


    while (curr != NULL)
    {
        if(curr->data == val){
            prev->next = curr->next;
            curr->next = nullptr;
            delete (curr);
            break;
    }
    prev = curr;
    curr = curr->next;
    }
    return head;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    node *head = new node(5);
    node *n2 = new node(6);
    node *n3 = new node(1);
    node *n4 = new node(9);
    // node *n5 = new node(4);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;
    // n5->next = NULL;

    cout << "Before Deleting: ";
    display(head);
    cout << endl;

    deleteNode(head, 1);
    cout << "After Deleting: ";
    display(head);

    return 0;
}