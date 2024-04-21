#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>

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

node *buildTree(node *root)
{

    int data;
    cout << "Enter Data: ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    root->left = buildTree(root->left);

    root->right = buildTree(root->right);
}

void solve(node *root, int sum, int &maxSum, int len, int &maxLen)
{

    // base case

    if (root == NULL)
    {

        if (len > maxLen)
        {
            maxLen = len;
            maxSum = sum;
        }

        else if (len == maxLen)
        {
            maxSum = max(sum, maxSum);
        }

        return;
    }

    sum = sum + root->data;

    solve(root->left, sum, maxSum, len + 1, maxLen);

    solve(root->right, sum, maxSum, len + 1, maxLen);
}

int sumofLongestNode(node *root)
{

    int len = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    int maxLen = 0;

    solve(root, sum, maxSum, len, maxLen);

    return maxSum;
}

int main()
{

    node *root = NULL;

    root = buildTree(root);

    cout << endl
         << endl;
       
    cout << "Printing the sum of the Longest node from root to leaf: " << sumofLongestNode(root) << endl;

    return 0;
}