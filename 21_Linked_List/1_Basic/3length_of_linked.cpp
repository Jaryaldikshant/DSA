#include <iostream>
#include<vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data1){
        this->data = data1;
        this->next = NULL;
    }
};

Node* convert2link(vector<int>&arr){
    Node *head = new Node(arr[0]);
    Node*mover = head;

    for(int i  = 1; i< arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


int linkLength(Node*head){
    int count = 0;

    Node *temp = head;

    while(temp){
        temp = temp->next;
        count++;
    }

    return count;
}

int main()
{
    vector<int> arr = {12,4,8,7};

    Node *head = convert2link(arr);

    cout<<"Length of Linked List: "<<linkLength(head)<<endl;




    return 0;
}