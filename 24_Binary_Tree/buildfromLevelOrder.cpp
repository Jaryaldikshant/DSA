#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left = nullptr;
    node *right = nullptr;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void buildLevel(node *&root)
{
    queue<node *> q;

    cout << "Enter data: ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}


void levelorderTraversal(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // purana level complete ho chuka hai
            cout << endl;

            if (!q.empty())
            { // queue still have some child nodes
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

int main()
{
    node *root = NULL;

    buildLevel(root);

    levelorderTraversal(root);

    return 0;
}

