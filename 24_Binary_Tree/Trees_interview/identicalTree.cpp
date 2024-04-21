#include <iostream>
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

node *buildTree(node *root)
{

    cout << "Enter Data: " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    root->left = buildTree(root->left);

    root->right = buildTree(root->right);
}

void preOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

bool isIdentical(node *root1, node *root2)
{

    // base case

    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }

    if (root1 == NULL && root2 != NULL)
    {
        return false;
    }

    if (root1 != NULL && root2 == NULL)
    {
        return false;
    }

    bool left = isIdentical(root1->left, root2->left);

    bool right = isIdentical(root1->right, root2->right);

    bool curr_value = root1->data == root2->data;

    if (left && right && curr_value)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{

    node *root1 = NULL;

    node *root2 = NULL;

    cout << "Enter tree 1: " << endl;
    root1 = buildTree(root1);

    cout << "Enter tree 2: " << endl;
    root2 = buildTree(root2);

    cout << "Root1: ";
    preOrder(root1);

    cout << endl;

    cout << "Root2: ";
    preOrder(root2);

    cout << endl;
    cout << "Tree are Identical or not: " << isIdentical(root1, root2);

    return 0;
}