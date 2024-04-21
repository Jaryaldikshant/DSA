#include <iostream>
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
        this->data = d;
        this->left = NULL;
        this->right = NULL;
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
        return nullptr;
    }

    cout << "Enter left Data for " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter right Data for " << data << endl;
    root->right = buildTree(root->right);
}

void levelorderTraversal(node *root)
{

    queue<node *> q;

    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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

int main()
{
    node *root = NULL;

    root = buildTree(root);

    cout << "Printing Tree: " << endl;
    levelorderTraversal(root);

    cout<<"Height : "<<height(root);

    return 0;
}