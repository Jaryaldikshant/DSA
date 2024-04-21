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
    cout << "Enter Data: ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }


    root = new node(data);
    root->left = buildTree(root->left);

    root->right = buildTree(root->right);
}

vector<int> bottomView(node *root)
{
    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    queue<pair<node *, int>> q;
    map<int, int> top;

    q.push({root,0});

    while(!q.empty()){

        pair<node* , int> temp = q.front();
        q.pop();

        node* frontNode = temp.first;
        int hd = temp.second;

        top[hd] = frontNode->data;

        if(frontNode->left){
            q.push({frontNode->left,hd-1});
        }


        if(frontNode->right){
            q.push({frontNode->right,hd+1});
        }
        }

        for(auto i : top){
            ans.push_back(i.second);
        }

        return ans;


    }

int main()
{
    node *root = NULL;

    root = buildTree(root);

    vector<int> res = bottomView(root);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}


