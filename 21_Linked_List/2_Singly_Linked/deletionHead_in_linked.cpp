#include<iostream>
#include<vector>
using namespace std;

class Node{

    public:
    int data;
    Node *next;


Node(int d,Node* n){
    this->data = d;
    this->next = n;
}

    Node(int data1){
        this->data = data1;
        this->next = NULL;
    }
};


Node* convertLink(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node * mover = head;

    for(int i = 1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
}

Node* deleteHead(Node* head){

    if(head == NULL){
        return head;
    }

    Node * temp = head;
    head = head->next;

    delete temp;

    return head;
}

int main(){
    vector<int> arr = {12,5,8,7};
    Node *head = convertLink(arr);
    head = deleteHead(head);

    print(head);
 
return 0;
}