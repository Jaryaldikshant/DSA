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

node *maxNode(node *root)
{

    node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

node *minNode(node *&root)
{

    node *value = root;

    while (value->left != NULL)
    {
        value = value->left;
    }

    return value;
}

void InOrder(node *&root)
{

    if (root == NULL)
    {
        return;
    }

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

node *insertIntoBST(node *root, int d)
{

    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (root->data > d)
    {
        root->left = insertIntoBST(root->left, d);
    }

    else
    {
        root->right = insertIntoBST(root->right, d);
    }
    return root;
}

void takeInput(node *&root)
{

    int data;
    cout << "Enter data: " << endl;
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

    takeInput(root);

    cout << "Printing: ";
    InOrder(root);
    cout << endl;

    cout << "Max value in BST: " << maxNode(root)->data << endl;

    cout << "Min value in BST: " << minNode(root)->data << endl;

    return 0;
}