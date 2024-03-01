
// middle of linked list using 2 pointer


#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = nullptr;
    }
};

void insertNode(node *&head, int position, int value)
{

    node *newNode = new node(value);
    node *temp = head;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthofNode(node *&head)
{
    node *temp = head;

    int cnt = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}



node *getMiddle(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *slow = head;
    node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}



node *middleNode(node *&head)
{
    return getMiddle(head);
}

int main()
{
    node *head = new node(10);
    node *n1 = new node(15);

    head->next = n1;
    n1->next = nullptr;

    insertNode(head, 1, 33);
    insertNode(head, 3, 55);
    insertNode(head, 5, 66);
    display(head);

    cout << endl;

    cout << "Length of Node: " << lengthofNode(head) << endl;

    cout << "Middle Node: " << middleNode(head)->data << endl;

    return 0;
}