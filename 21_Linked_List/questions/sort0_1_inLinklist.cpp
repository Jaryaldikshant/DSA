#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d1)
    {
        this->data = d1;
        this->next = nullptr;
    }
};

// Approch 1: simple traverse and replace the values
// node *sortLink(node *head)
// {

//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }

//         else if (temp->data == 1)
//         {
//             oneCount++;
//         }

//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }

//         temp = temp->next;
//     }

//     temp = head;

//     while (temp != NULL)
//     {
//         if (zeroCount != 0)
//         {
//             temp->data = 0;
//             zeroCount--;
//         }

//         else if (oneCount != 0)
//         {
//             temp->data = 1;
//             oneCount--;
//         }

//         else if (twoCount != 0)
//         {
//             temp->data = 2;
//             twoCount--;
//         }
//         temp = temp->next;
//     }

//     return head;
// }

void insertAtTail(node *&tail, node *curr)
{

    tail->next = curr;
    tail = curr;
}

// Approch 2: without Replacment by merging node

node *sortLink(node *head)
{

    // dummy node: 3 sublist in which node of  0's, 1's, 2's store ,if don't make dummpy node , then we have alot of if statement in our code

    node *zeroHead = new node(-1);
    node *zeroTail = zeroHead;

    node *oneHead = new node(-1);
    node *oneTail = oneHead;

    node *twoHead = new node(-1);
    node *twoTail = twoHead;

    node *curr = head;

    // seprate list for 1's and 2's and 0's
    while (curr != NULL)
    {

        int value = curr->data;

        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }

        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }

        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }

        curr = curr->next;
    }

    // merge 3 sublist

    if (oneHead->next != NULL)
    {

        // if 1's list is non-empty
        zeroTail->next = oneHead->next;
    }

    else
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head
     head = zeroHead->next;

// delete dummy nodes
     delete zeroHead;
     delete oneHead;
     delete twoHead;

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

    node *head = new node(1);
    node *n1 = new node(0);
    node *n2 = new node(2);
    node *n3 = new node(1);
    node *n4 = new node(2);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    display(head);

    cout << endl;

    head = sortLink(head);
    display(head);

    return 0;
}