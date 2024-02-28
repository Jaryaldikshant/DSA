#include<iostream>
#include<vector>
using namespace std;

class Node{

    public:
    int data;
    Node * next;

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};

Node* convertArr2L(vector<int>&arr){

    Node* head = new Node(arr[0]);

    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    
}

int main(){

    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2L(arr);
    cout << head->data;

return 0;
}