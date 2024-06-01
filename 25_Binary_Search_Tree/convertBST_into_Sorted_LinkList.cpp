#include <iostream>
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
        left = right = NULL;
    }
};

void inOrder(node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}


node* flatten(node*root){

// 1 step: store all sorted node in ans vector
    vector<int> ans;
    inOrder(root, ans);

    node* newRoot = new node(ans[0]);
    
    node* curr = newRoot;

// 2nd step: do left of the node null and right equal to the next node
    for(int i = 1; i <ans.size(); i++){
        node* temp = new node(ans[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }


// 3rd step: left and right of last node is NULL
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;

}


node *insertIntoBST(node *root, int d)
{

    if (root == nullptr)
    {
        root = new node(d);
        return root;
    }

    if (root->data < d)
    {
        root->right = insertIntoBST(root->right, d);
    }

    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{

    node *root = NULL;

    cout << "Enter data for BST: " << endl;
    takeInput(root);

    cout << endl;

    vector<int> ans;

    cout << "Printing BST: ";
    inOrder(root, ans);

    cout << endl;
    
   cout<<"Printing Sorted Linked List: ";
   node* curr = flatten(root);


   while(curr != NULL){
    cout<<curr->data<<" ";
    curr = curr->right;
   }

        return 0;
}