
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


int nodelength(node* &head){
    int cnt = 0;
    node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

// using Recursion
node *Kreverse(node *&head, int k)
{
    // base case

    if (head == nullptr)
    {
        return head;
    }

    int len = nodelength(head);

//  if length is not divisible by k then the last group of nodes should remain unchange
    if(len < k){
        return head;
    }

    // step 1: reverse k nodes
    node *next = NULL;
    node *curr = head;
    node *prev = NULL;

    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    // step 2: recursion call
    if (next != NULL)
    {
        head->next = Kreverse(next, k);
    }

    // step 3:return head of reversed list
    return prev;
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

    node *head = new node(5);
    node *n1 = new node(4);
    node *n2 = new node(3);
    node *n3 = new node(7);
    node *n4 = new node(9);
    node *n5 = new node(2);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

        // node *curr = head;
        // node *prev = nullptr;

        display(head);

    int k;
    cin >> k;

    head = Kreverse(head, k);
    display(head);

    return 0;
}