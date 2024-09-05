#include <iostream>
#include <queue>
using namespace std;

class node
{

public:
    int data;
    node *left ;
    node *right ;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{

    cout << "Enter Data: " << endl;

    int data;
    cin >> data;

   

    if (data == -1)
    {
        return NULL;
    }

     root = new node(data);

    cout << "Enter data for Left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for Right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelorderTraversal(node *root)
{

    if(root == NULL){
        return;
    }

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

    root = buildTree(root);

    cout<<"Printing the level order traversal output"<<endl;
    levelorderTraversal(root);

    return 0;
}