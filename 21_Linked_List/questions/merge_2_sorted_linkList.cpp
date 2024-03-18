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

node *solve(node *head1, node *head2)
{

    if (head1->next == nullptr)
    {
        head1->next = head2;
        return head1;
    }

    node *curr = head1;
    node *next1 = curr->next;
    node *temp = head2;

    while (next1 != NULL && temp != NULL)
    {

        if (temp->data >= curr->data && temp->data <= next1->data)
        {

            // adding the node
            curr->next = temp;
            node *store = temp->next;
            temp->next = next1;

            // updating the added node
            curr = temp;
            temp = store;
        }

        else
        {
            // curr and next goes foward

            curr = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr->next = temp;
                return head1;
            }
        }
    }

    return head1;
}

node *sortTwoList(node *head1, node *head2)
{

    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {
        solve(head1, head2);
    }

    else
    {
        solve(head2, head1);
    }
}

void display(node *head)
{

    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    node *head1 = new node(13);
    node *n2 = new node(10);
    // node *n3 = new node(5);

    node *head2 = new node(35);
    node *n5 = new node(1);
    // node *n6 = new node(5);

    head1->next = n2;
    // n2->next = n3;
    n2->next = nullptr;

    head2->next = n5;
    // n5->next = n6;
    n5->next = nullptr;

    display(head1);

    cout << endl;

    display(head2);

    cout << endl;

    sortTwoList(head1, head2);
    display(head1);

    return 0;
}