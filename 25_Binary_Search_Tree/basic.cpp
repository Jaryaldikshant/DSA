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
        left = right = nullptr;
    }
};

void levelOrderTraversal(node *root)
{

    if(root == NULL){
        return ;
    }

    queue<node *> q;

    q.push(root);
 

    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->right)
        {
            q.push(temp->right);
        }

        if (temp->left)
        {
            q.push(temp->left);
        }
    }
}

node *insertIntoBST(node *root, int data)
{

    // base case

    if (root == nullptr)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {

        // insert in right subtree
        root->right = insertIntoBST(root->right, data);
    }

    else
    {
        // insert in left part
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void takeInput(node *&root)
{
    int d;
    cin >> d;

    while (d != -1)
    {
       root =  insertIntoBST(root, d);
        cin >> d;
    }
}

int main()
{

    node *root = nullptr;

    cout << "Enter Data to create BST: " << endl;
    takeInput(root);
    cout << endl;

    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    return 0;
}