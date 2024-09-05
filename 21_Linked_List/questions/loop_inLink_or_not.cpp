#include <iostream>
#include <map>
#include <algorithm>
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

// approch 1 : Using map
bool detectLoop(node *&head)
{

    if (head == NULL)
        return false;

    map<node *, bool> visited;

    node *temp = head;

    while (temp != NULL)
    {

        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Prexent on element: " << temp->data << endl;
            return 1;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// Approch 2: Floyd's cycle alorithms (slow-fast)

node *floydDetect(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "Cycle Present at: " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

// find starting node of loop

node *getStart(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *intersect = floydDetect(head);
    node *slow = head;
    while (slow != intersect)
    {
        slow = slow->next;
        intersect = intersect->next;
    }
    return slow;
}

void removeLoop(node *head)
{

    if (head == NULL)
    {
        return;
    }

    node *startofLoop = getStart(head);
    node *temp = startofLoop;
    while (temp->next != startofLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
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

    if (detectLoop(head))
        cout << "Loop is present" << endl;

    else
    {
        cout << "Loop is not present" << endl;
    }

    if (floydDetect(head))
    {
        cout << "Loop Present" << endl;
    }

    else
    {
        cout << "Loop not Present" << endl;
    }

    cout << "Starting point of loop is: " << getStart(head)->data << endl;

    // removing loop
    removeLoop(head);

    cout << endl;
    cout << endl;

    if (detectLoop(head))
        cout << "Loop is present" << endl;

    else
    {
        cout << "Loop is not present" << endl;
    }
    display(head);

    return 0;
}