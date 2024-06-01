#include <iostream>
#include<bits/stdc++.h>


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

void inorder(node *root,vector<int>&ans)
{
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

node* inorderToBST(int st, int ed, vector<int> ans){

    // base case
    if(st>ed){
        return nullptr;
    }

    int mid = (st+ed)/2;

    node* root = new node(ans[mid]);

    root->left = inorderToBST(st,mid-1,ans);
    root->right = inorderToBST(mid+1,ed,ans);

    return root;

}


node* balancedBST(node*root){

    vector<int> ans;

    inorder(root,ans);

    return inorderToBST(0,ans.size()-1,ans);


}

node *insertinto(node *root, int d)
{

    if (root == nullptr)
    {
        root = new node(d);
        return root;
    }

    if (root->data < d)
    {
        root->right = insertinto(root->right, d);
    }

    else
    {
        root->left = insertinto(root->left, d);
    }

    return root;
}

void takeinput(node *&root)
{

    int d;
    cin >> d;

    while (d != -1)
    {
        root = insertinto(root, d);
        cin >> d;
    }
}
int main()
{
    node *root = nullptr;

    cout << "Enter Data for Bst: " << endl;
    takeinput(root);


    // vector<int> ans;

    // cout << "BST: ";
    // inorder(root,ans);

    return 0;
}