// Middle Index using Length

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

void middleEle(node *&head)
{
}

void insertNode(node *&head, int pos, int value)
{
    node *newNode = new node(value);

    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    node *temp = head;

    int cnt = 1;
    while (cnt < pos - 1)
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

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(node *&head, int pos)
{
    cout << "Deleting....." << endl;
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return;
    }

    node *curr = head;
    node *prev = nullptr;

    int cnt = 1;
    while (cnt < pos - 1)
    {
        curr = curr->next;
        cnt++;
    }

    node *store = curr->next;
    curr->next = store->next;
    store->next = nullptr;

    delete store;
}

int LengthNode(node *&head)
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

int MiddleNode(node *&head)
{
    int length = LengthNode(head);
    // int middle = 0;
    int ans = (length / 2) + 1;

    // if(length % 2 == 0){
    //     middle = (length/2) + 1;
    // }

    // else{
    //     middle = (length/2)+1;
    // }

    // return middle;
    return ans;
}
int main()
{

    node *head = new node(10);
    node *n1 = new node(20);
    node *n2 = new node(30);
    node *n3 = new node(40);

    head->next = n1;
    n1->next = nullptr;
    // n2->next = n3;
    // n3->next = nullptr;

    insertNode(head, 1, 55);
    insertNode(head, 4, 33);
    display(head);

    cout << endl;

    // deleteNode(head, 3);
    // display(head);

    cout << "Length of node is: " << LengthNode(head) << endl;

    cout << "Middle index of the Linked list: " << MiddleNode(head) << endl;

    return 0;
}