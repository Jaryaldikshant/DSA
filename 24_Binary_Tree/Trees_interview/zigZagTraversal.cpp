#include <iostream>
#include <vector>
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
        left = right = NULL;
    }
};

node *buildTree()
{
    int data;
    cin >> data;

  

    if (data == -1)
    {
        return NULL;
    }

   node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
}

vector<int> zigZagTraversal(node *root)
{

    vector<int> result;

    if (root == NULL)
    {
        return result;
    }

    queue<node *> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty())
    {

        int size = q.size();
        vector<int> ans(size);

        // level process
        for (int i = 0; i < size; i++)
        {

            node *frontNode = q.front();
            q.pop();

// normal order insert / or reverse order insert
            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }

            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }

        // direction change after each level
        leftToRight = !leftToRight;

        for (auto i : ans)
        {
            result.push_back(i);
        }
    }

    return result;
}

int main()
{
    node *root = nullptr;

    root = buildTree();

    cout << "Zig zag Traversal: ";
    vector<int> result = zigZagTraversal(root);
    
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}