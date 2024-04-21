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


// for input in Binary Tree
node *buildTree(node *root)
{

    cout << "Enter Data: " << endl;

    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for Left of " << data << endl;
    
    root->left = buildTree(root->left);

    cout << "Enter data for Right of " << data << endl;
    root->right = buildTree(root->right);
}


// method of traversal
// void levelorderTraversal(node *root)
// {

//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         { // purana level complete ho chuka hai
//             cout << endl;

//             if (!q.empty())
//             { // queue still have some child nodes
//                 q.push(NULL);
//             }
//         }

//         else
//         {
//              cout << temp->data << " ";

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }

//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

void inorder(node *root)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{

    // base case
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;

    root = buildTree(root);

    // cout<<"Printing the level order traversal output"<<endl;
    // levelorderTraversal(root);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);

    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);

    cout << endl; 

    return 0;
}