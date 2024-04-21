#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = right = nullptr;
    }
};

bool SearchinBST(node*root, int x){

    // base case

// if root is null 
    if(root == NULL){
        return false;
    }
// if root data equals to the value
    if(root->data == x){
        return true;
    }

    // recursive call
    if(root->data > x){
        return SearchinBST(root->left,x);
    }

    else{
        return SearchinBST(root->right,x);
    }

}

node *insertIntoBST(node *root, int data)
{

    // base case

    if (root == nullptr)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {

        // insert in right subtree
        root->right = insertIntoBST(root->right, data);
    }

    else
    {
        // insert in left part
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void takeInput(node *&root)
{
    int d;
    cin >> d;

    while (d != -1)
    {
       root =  insertIntoBST(root, d);
        cin >> d;
    }
}

int main()
{

    node *root = nullptr;

    cout << "Enter Data to create BST: " << endl;
    takeInput(root);
    cout << endl;

    // cout<<"Printing the BST: "<<endl;
    // levelOrderTraversal(root);

    int x ;
    cout<<"Enter value u wantt to find: ";
    cin>>x;

    cout<<"Searching Value......... : "<<SearchinBST(root, x);

    return 0;
} 