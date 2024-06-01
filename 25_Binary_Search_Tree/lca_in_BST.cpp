#include <iostream>
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

node *LCA(node *&root,int p, int q) {

// HERE TIME COMPLEXITY: O(N)

    // base case
    if(root == NULL){
        return NULL;
    }


//  RECURSIVE WAY: Here sapce complexity: O(N)

    // if(root->data < p && root->data < q){
    //     return LCA(root->right,p,q);
    // }

    // if(root->data > p && root->data > q){
    //     return LCA(root->left,p,q);
    // }

    // return root;



// ITERATIVE WAY: Here space complexity: O(1);

    while(root != NULL){
        if(root->data < p && root->data < q){
            root = root->right;
        }


        else if(root->data > p && root->data> q){
            root = root->left;
        }

        else{
            return root;
        }
    }
}

void inOrder(node *&root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

node *insertIntoBST(node *root, int d)
{

    if (root == nullptr)
    {
        root = new node(d);
        return root;
    }

    if (root->data < d)
    {
        root->right = insertIntoBST(root->right, d);
    }

    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{

    node *root = NULL;

   
    cout << "Enter data for BST: " << endl;
    takeInput(root);

    cout << endl;

    cout << "Printing BST: ";
    inOrder(root);

    int p ; int q;
    cout<<"Enter the node for which we have to find LCA : ";
    cin>>p>>q;

   node* lca = LCA(root,p,q);

   if(lca != NULL){
    cout<<lca->data<<" ";
   }

    return 0;
}