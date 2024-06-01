#include <iostream>
#include <vector>
#include <climits> // For INT_MIN and INT_MAX

using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;
    node(int d) {
        data = d;
        left = right = NULL;
    }
};

node *constructBST(vector<int> &preorder, int &index, int mini, int maxi) {
    if (index >= preorder.size()) {
        return NULL;
    }

    if (preorder[index] < mini || preorder[index] > maxi) {
        return nullptr;
    }

    node *root = new node(preorder[index++]);

    root->left = constructBST(preorder, index, mini, root->data);
    root->right = constructBST(preorder, index, root->data, maxi);

    return root;
}

void postOrder(node *root) {
    if (root == nullptr) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    node *root = nullptr;

    vector<int> preorder = {8, 5, 1, 7, 10, 12}; // Example preorder traversal
    int index = 0;
    root = constructBST(preorder, index, INT_MIN, INT_MAX);

    cout << "Postorder Traversal: ";
    postOrder(root);

    return 0;
}
