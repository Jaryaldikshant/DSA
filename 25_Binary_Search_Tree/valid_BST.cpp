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

node *minNode(node *root)
{

    node *temp = root;

    while (temp->left != nullptr)
    {
        temp = temp->left;
    }

    return temp;
}

node *maxNode(node *root)
{

    node *ans = root;

    while (ans->right != NULL)
    {
        ans = ans->right;
    }

    return ans;
}

bool validateBST(node *root, node *minNode, node *maxNode)
{

    if (root == NULL)
    {
        return true;
    }

    if ((minNode != NULL && root->data <= minNode->data) || (maxNode != NULL &&root->data >= maxNode->data))
    {
        return false;
    }

    return validateBST(root->left, minNode, root) && validateBST(root->right, root, maxNode);
}

void levelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

node *Insert_into_BST(node *root, int d)
{

    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (root->data > d)
    {
        root->left = Insert_into_BST(root->left, d);
    }

    else
    {
        root->right = Insert_into_BST(root->right, d);
    }

    return root;
}

void takeInput(node *&root)
{

    int data;
    cin >> data;

    while (data != -1)
    {
        root = Insert_into_BST(root, data);
        cin >> data;
    }
}

int main()
{

    node *root = NULL;

    cout << "Enter Data to Create BST: " << endl;
    takeInput(root);
    cout << endl;

    // cout<<"Printing BST: ";
    // levelOrder(root);

    cout << endl;

    cout << "BST is Valid or not? : " << validateBST(root, NULL, NULL);

    return 0;
}