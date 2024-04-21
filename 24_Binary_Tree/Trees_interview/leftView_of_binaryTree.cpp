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

node *buildTree(node *root)
{
    int data;
    cout << "Enter Data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
}

void solve(node *root, vector<int> &ans, int lvl)
{

    // base case

    if (root == NULL)
    {
        return;
    }

    // we entered into a new level
    if (lvl == ans.size())
    {
        ans.push_back(root->data);
    }

    solve(root->left, ans, lvl + 1);
    solve(root->right, ans, lvl + 1);
}

vector<int> leftView(node *root)
{
    vector<int> ans;

    solve(root, ans, 0);

    return ans;
}

int main()
{
    node *root = NULL;
    root = buildTree(root);

    vector<int> ans = leftView(root);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}