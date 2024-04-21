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
        this->data = d;
        left = right = NULL;
    }
};

node *buildTree(node *root)
{

    // cout<<"Enter data: "<<endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;

    return ans;
}

bool checkBalanced(node *root)
{

    if (root == NULL)
    {
        return true;
    }

    bool left = checkBalanced(root->left);
    bool right = checkBalanced(root->right);

    bool diff = abs(height(root->left) - height(root->right)) <= 1;

    if (left && right && diff)
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

    node *root = NULL;

    root = buildTree(root);

    inorder(root);
    cout << endl;

    cout << "Tree is balanced or not: " << checkBalanced(root);

    return 0;
}