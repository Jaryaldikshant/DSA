#include <iostream>
#include <vector>
using namespace std;

// Approch 1:  using array and method used in array  T.C: O(n),   S.C: O(n);
// class node
// {

//     private:
//     bool checkPalindrome(vector<int> arr){

//         int n = arr.size();

//         int s = 0;
//          int e = n-1;

//          while(s<=e){

//             if(arr[s] != arr[e]){
//                 return false;
//             }

//             s++;
//             e--;
//          }
//          return true;
//     }

// public:
//     int data;
//     node *next;

//     node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }

//     bool isPalindrome(node* head){
//     // step 1
//     vector<int> arr;
//     node* temp = head;

//     while(temp != nullptr){
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }

//     return checkPalindrome(arr);

// }
// };



 
// Approch 2: here we find middle term and reverse the list after the middle term, then we compare both the halfs and we don't use extra space like previously approch , T.C: O(n) and S.C: O(1)
class node
{

private:
    node *getMid(node *head)
    {
        node *slow = head;
        node *fast = slow->next;

        while (fast != NULL && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    node *reverse(node *head)
    {

        node *curr = head;
        node *prev = nullptr;
        node *next = nullptr;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
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
        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        // step 1: find mid

        node *mid = getMid(head);

        // step 2: reverse list after the middle

        node *temp = mid->next;
        mid->next = reverse(temp);

        // step 3: compare both halfs

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

        // step 4: repeat 2nd step
        temp = mid->next;
        mid->next = reverse(temp);

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

    head->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // display(head);
    cout << endl;

    cout << head->isPalindrome(head) << endl;

    return 0;
}