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

vector<int> topView(node *root)
{

    // base case
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }

    map<int, int> topNode;
    queue<pair<node *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {
        pair<node *, int> temp = q.front();

        q.pop();

        node *frontNode = temp.first;

        int hd = temp.second;

        //  if one value is present for a HD , then do nothning
        if (topNode.find(hd) == topNode.end())
        {
            topNode[hd] = frontNode->data;
        }

        if (frontNode->left)
        {
            q.push({frontNode->left, hd-1});
        }

        if (frontNode->right)
        {
            q.push({frontNode->right, hd+1});
        }
    }

    for(auto i:topNode){
        ans.push_back(i.second);
    }
    return ans;
}

void inOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
 

    // cout << "Printing tree: ";
    // inOrder(root);

    vector<int> res = topView(root);

    for(auto i: res){
        cout<<i<<" ";
    }

    return 0;
}