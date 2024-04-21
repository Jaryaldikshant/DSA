#include <iostream>
#include <queue>
#include <stack>
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
    cout << "Enter Data: ";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data of left node of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data of right node of " << data << endl;
    root->right = buildTree(root->right);
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    stack<node *> s;

    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(nullptr);
            }

            while (!s.empty())
            {
                node* newnode= s.top();
                s.pop();
                cout << newnode->data << " ";
            }
            
            cout << endl;
        }

        else
        {
           s.push(temp);

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

int main()
{
    node *root = NULL;

    root = buildTree(root);

    cout << "Printing the tree: " << endl;
    levelOrderTraversal(root);

    return 0;
}