#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// check if list is circular or not
bool isCircularList(node *head)
{

    // empty list case
    if (head == NULL)
    {
        return true;
    }

    node *temp = head;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return false;
    }

    else
    {
        return true;
    }
}

// insertion of node
void insertNode(node *&head, int value)
{

    node *newNode = new node(value);
    // insert at head;
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    else
    {
        node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}

// deletion of node

void deleteNode(node *&head, int position)
{
    node *temp = head;
    // deletion of value at head
    if (position == 1)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        node *store = head;
        temp->next = head->next;
        head = head->next;
        delete store;
        // return ;
    }

    else
    {
        int cnt = 1;
        while (cnt != position - 1)
        {
            temp = temp->next;
            cnt++;
        }

        node *store = temp->next;
        temp->next = temp->next->next;
        delete store;
    }
}

// traversing node
void display(node *&head)
{
    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    node *head = NULL;

    insertNode(head, 55);
    insertNode(head, 12);
    insertNode(head, 45);
    insertNode(head, 90);

    display(head);

    cout << endl;

    // deleteNode(head, 4);
    // display(head);

    if (isCircularList(head))
        cout << "List is Circular" << endl;

    else
    {
        cout << "List is not Circular" << endl;
    }

    return 0;
}