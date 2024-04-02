#include <iostream>
using namespace std;
class node
{

private:
    node *reverse(node *head)
    {

        node *curr = head;
        node *prev = NULL;
        node *next1 = NULL;

        while (curr != NULL)
        {
            next1 = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next1;
        }
        return prev;
    }

    void insertAtTail(node *&head, node *&tail, int val)
    {

        node *temp = new node(val);

        // list is empty
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }

        // list is not empty
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    node *addList(node *head1, node *head2)
    {

        int carry = 0;

        node *anshead = NULL;
        node *ansTail = NULL;

        while (head1 != NULL && head2 != NULL)
        {

            int sum = carry + head1->data + head2->data;

            int digit = sum % 10;
            carry = sum / 10;

            // create node and add in answer linked list
            insertAtTail(anshead, ansTail, digit);

            head1 = head1->next;
            head2 = head2->next;
        }

        while (head1 != NULL)
        {

            int sum = carry + head1->data;
            int digit = sum % 10;
            carry = sum / 10;

            insertAtTail(anshead, ansTail, digit);

            head1 = head1->next;
        }

        while (head2 != NULL)
        {

            int sum = carry + head2->data;
            int digit = sum % 10;
            carry = sum / 10;
            insertAtTail(anshead, ansTail, digit);

            head2 = head2->next;
        }

        while (carry != 0)
        {
            insertAtTail(anshead, ansTail, carry);
            carry /= 10;
        }

        return anshead;
    }

public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    node *addTwoLists(node *head1, node *head2)
    {

        // step 1: reverse input list
        head1 = reverse(head1);
        head2 = reverse(head2);

        // step 2:  adding two lists

        node *ans = addList(head1, head2);

        // step 3: reverse ans list
        ans = reverse(ans);

        return ans;
    }
};

void display(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    node *head1 = new node(4);
    node *n2 = new node(5);

    head1->next = n2;
    // n2->next = NULL;

    node *head2 = new node(3);
    node *n4 = new node(4);
    node *n5 = new node(5);

    head2->next = n4;
    n4->next = n5;
    // n5->next = NULL;

    cout << "List 1: ";
    display(head1);

    cout << endl;

    cout << "List 2: ";
    display(head2);

    cout << endl;

    // reverse(head1);
    node *result = head1->addTwoLists(head1, head2);

    cout << "Result: ";
    display(result);

    return 0;
}