#include <iostream>
#include <vector>
#include <map>
#include <queue>
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
    cout << "Enter Data: " << endl;
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

vector<int> verticalTraversal(node *root)
{

    map<int, map<int, vector<int>>> nodes;

    queue<pair<node *, pair<int, int>>> q;

    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    // 0,0 : level and horizontal Distance is 0 at first
    q.push(make_pair(root, make_pair(0, 0)));

    while (!q.empty())
    {

        pair<node *, pair<int, int>> temp = q.front();
        q.pop();

        node *frontNode = temp.first;

        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);

        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
        }

        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }
    }

    for (auto i : nodes)
    {
        for (auto j : i.second)
        {
            for (auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }

    return ans;
}

int main()
{

    node *root = NULL;
    root = buildTree();

    vector<int> res = verticalTraversal(root);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}