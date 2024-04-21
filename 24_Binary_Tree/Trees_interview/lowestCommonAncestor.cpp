#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>

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

node *buildTree(node *root)
{

    int data;
    cout << "Enter Data: ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    root->left = buildTree(root->left);

    root->right = buildTree(root->right);
}

node *lca(node *root, int n1, int n2)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *leftAns = lca(root->left, n1, n2);

    node *rightAns = lca(root->right, n1, n2);

    if (leftAns != NULL && rightAns != NULL)
    {
        return root;
    }

    else if (leftAns != NULL && rightAns == NULL)
    {
        return leftAns;
    }

    else if (rightAns != NULL && leftAns == NULL)
    {
        return rightAns;
    }

    else
    {
        return nullptr;
    }
}

int main()
{

    node *root = NULL;

    root = buildTree(root);

    cout << endl;

    int n1, n2;
    cout << "Enter n1 and n2: ";
    cin >> n1 >> n2;

    cout << endl;

    cout << "Lowest Common ancestor of " << n1 << " and " << n2 << " is: ";
    cout << lca(root, n1, n2)->data;

    return 0;
}