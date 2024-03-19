#include <iostream>
#include <vector>
using namespace std;

class node
{

private:
    node *getMid(node *head)
    {
        node *slow = head;
        node *fast = head->next;

        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    node *reverseLink(node *head)
    {

        node *curr = head;
        node *prev = nullptr;
        node *next = nullptr;

        while (curr != NULL)
        {
            next = curr->next;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    bool isPalindrome(node *head)
    {

        if (head == nullptr || head->next == NULL)
        {
            return false;
        }

        // find mid
        node *mid = getMid(head);

        // reverse link
        node *temp = mid->next;
        mid->next = reverseLink(temp);

        // compare both
        node *head1 = head;
        node *head2 = mid->next;

        while (head2 != NULL)
        {
            if (head1->data != head2->data)
            {
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }


        temp = mid->next;
        mid->next = reverseLink(head);

        return true;
    }
};

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
    node *n2 = new node(2);
    node *n3 = new node(3);
    node *n4 = new node(3);
    node *n5 = new node(2);
    node *n6 = new node(1);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = nullptr;

    display(head);
    cout << endl;

    cout << head->isPalindrome(head) << endl;

    return 0;
}