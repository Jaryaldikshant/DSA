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

pair<bool, int> sumTree(node *root)
{

// base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

// leaf node
    if (root->left == NULL && root->right == NULL)
    {

        pair<bool,int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool,int> leftAns = sumTree(root->left);

    pair<bool,int> rightAns = sumTree(root->right);

    bool left = leftAns.first;

    bool right = rightAns.first;

    bool condition = root->data == leftAns.second + rightAns.second;

    pair<bool,int> ans;

    if(left && right && condition){
        ans.first = true;
        ans.second = 2*root->data;
    }

    else{
        ans.first = false;
    }

    return ans;
}

// if sum of child in left-sub Tree + sum of child in right-sub tree == parent Node
bool isSumTree(node *root)
{
    return sumTree(root).first;
}

int main()
{

    node *root1 = NULL;

    cout << "Enter tree: " << endl;
    root1 = buildTree(root1);

    cout << "Root1: ";
    preOrder(root1);

    cout << endl;

    int sum = 0;

    cout<<"Sum Tree ? "<<isSumTree(root1);

    return 0;
}