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

void inOrder(node *&root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

bool TwoSumExist(node *root, int target)
{

    vector<int> ans;
    inOrder(root,ans);

    int i = 0;
    int j = ans.size() - 1;

    while (i < j)
    {

        int sum = ans[i] + ans[j];

        if (sum == target)
        {
            return true;
        }

        else if (sum > target)
        {
            j--;
        }

        else
        {
            i++;
        }
    }

    return false;
}

node *insertIntoBST(node *root, int d)
{

    if (root == nullptr)
    {
        root = new node(d);
        return root;
    }

    if (root->data < d)
    {
        root->right = insertIntoBST(root->right, d);
    }

    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(node *&root)
{
    int data;
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

    cout << "Enter data for BST: " << endl;
    takeInput(root);

    cout << endl;

    vector<int> ans;

    cout << "Printing BST: ";
    inOrder(root, ans);

    cout << endl;
    int target;
    cout << "Enter Target: ";
    cin >> target;
    
    
    cout<<"Two sum exist or not ? "<<TwoSumExist(root, target);

        return 0;
}