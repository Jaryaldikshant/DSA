#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


Node *convertLink(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node*mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node * temp = new Node(arr[i]);

        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


Node* removeTail(Node*head){


// if linked list is empty or with the single element
    if(head == NULL || head->next == NULL){
        return NULL;
    }

// store a temp which is equal to head;
    Node* temp = head;


    while(temp->next->next != NULL){
        // keep on moving it is not the last element
        temp = temp->next;
    }

// delete the last node in linked list
    delete temp->next;

    temp->next = NULL;

    return head;

}




int main(){

    vector<int> arr = {12,5,8,3};
    int size = 4;

    Node *head = convertLink(arr);

    head = removeTail(head);

    print(head);



return 0;
}