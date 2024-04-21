#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};


node* minVal(node* root){

    node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}


node* deleteNode(node* root, int val){

    // base case
    if(root == NULL){
        return root;
    }

    if(root->data == val){

        // 0 child
        if(root->right ==  NULL && root->left == NULL){
            delete root;
            return NULL;
        }




        // 1 child

        // if left child is only there
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        // if right child is only there
        if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }



        // 2 children

        if(root->left != NULL && root->right != NULL){

            // find minimum element from right
            int mini = minVal(root->right)->data;

            // replace root->data with mini
            root->data = mini;


            // delete the use node
            root->right = deleteNode(root->right,mini);
            return root;   
        }

    }


    else if(root->data > val){
        root->left = deleteNode(root->left,val);
        return root;
    }


    else{
        root->right = deleteNode(root->right,val);
        return root;
    }

}



void InOrder(node* &root){

    if(root == NULL){
        return ;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);


}

node* insertIntoBST(node*root, int d){

    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(root->data > d){
        root->left = insertIntoBST(root->left,d);
    }

    else{
        root->right = insertIntoBST(root->right,d);
    }
    return root;
}

void takeInput(node*&root){

    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }

}

int main(){

    node* root = NULL;

    takeInput(root);

    cout<<"Printing: ";
    InOrder(root);
    cout<<endl;


    cout << "Min value in BST: " << minVal(root)->data << endl;

    int val;
    cout<<"Enter vale to delete: ";
    cin>>val;


    root = deleteNode(root,val);



    
    cout<<"Printing: ";
    InOrder(root);
    cout<<endl;


return 0;
}