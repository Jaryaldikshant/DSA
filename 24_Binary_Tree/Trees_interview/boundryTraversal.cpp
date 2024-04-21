#include <iostream>
#include <vector>
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
        right = left = NULL;
    }
};

node *buildTree()
{
    int data;
    cout << "Enter data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void inorder(node *root, vector<int> &ans)
{

    if (root == NULL)
    {
        return;
    }
    // L N R
    inorder(root->left, ans);
    cout << root->data << " ";
    ans.push_back(root->data);
    inorder(root->right, ans);
}

void LeftPart(node *root, vector<int> &res)
{

    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    res.push_back(root->data);

    if (root->left)
    {
        LeftPart(root->left, res);
    }

    else
    {
        LeftPart(root->right, res);
    }
}

void TraverseLeaf(node *root, vector<int> &res)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    // if we are in leaf node
    if (root->left == NULL && root->right == NULL)
    {
        res.push_back(root->data);
        return;
    }

    TraverseLeaf(root->left, res);
    TraverseLeaf(root->right, res);
}

void RightPart(node *root, vector<int> &res)
{

    // base case || if we are on leaf node

    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->right)
    {
        RightPart(root->right, res);
    }

    else
    {
        RightPart(root->left, res);
    }

    // if returning
    res.push_back(root->data);
}

vector<int> boundary(node *root)
{

    vector<int> res;

    if (root == NULL)
    {
        return res;
    }

    res.push_back(root->data);

    // store/print left part
    LeftPart(root->left, res);

    // traverse leaf node

    // for left of leftsubtree
    TraverseLeaf(root->left, res);

    // for leaf of rightsubTree
    TraverseLeaf(root->right, res);

    // store/print right part
    RightPart(root->right, res);

    return res;
}

int main()
{

    node *root = NULL;
    root = buildTree();

    // vector<int>ans;
    // inorder(root,ans);

    vector<int> ans = boundary(root);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}