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
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{

    cout << "Enter data: " << endl;
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
}

int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);

    int op3 = height(root->left) + height(root->right) + 1;
    
    int ans = max(op3, (max(op1, op2)));
    return ans;
}

int main()
{
    node *root = NULL;
    root = buildTree(root);

    cout << "Printing: " << endl;
    inorder(root);

    cout << "Height: " << height(root) << endl;

    cout << "Diameter: " << diameter(root) << endl;

    return 0;
}