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
        this->data = d;
        this->left = this->right = NULL;
    }
};

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

void InOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    // inorder : LNR
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PreOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    // preOder: NLR
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    // PostOrder:LRN
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

node *Insert_into_BST(node *root, int d)
{

    if (root == nullptr)
    {
        root = new node(d);
        return root;
    }

    if (d < root->data)
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

    node *root = nullptr;

    cout << "Enter Data for Binary Search Tree: " << endl;
    takeInput(root);

    cout << endl;

    cout << "Printing binary Search Tree: ";
    levelOrder(root);

    cout << endl;
    cout << "Printing Inorder Traversal for Binary Search Tree: " ;
    InOrder(root);

    cout << endl;
    cout << "Printing Preorder Traversal for Binary Search Tree: ";
    PreOrder(root);

    cout << endl;
    cout << "Printing Postorder Traversal for Binary Search Tree: " ;
    PostOrder(root);

    return 0;
}