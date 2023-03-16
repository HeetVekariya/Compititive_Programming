//Author  : Heet Vekariya
//Purpose : Construct Binary Tree from Inorder and Postorder Traversal
//Date    : 16/3/2023

/*

Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.


Constraints:

-> 1 <= inorder.length <= 3000
-> postorder.length == inorder.length
-> -3000 <= inorder[i], postorder[i] <= 3000
-> inorder and postorder consist of unique values.
-> Each value of postorder also appears in inorder.
-> inorder is guaranteed to be the inorder traversal of the tree.
-> postorder is guaranteed to be the postorder traversal of the tree.

*/

#include <bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* Build(vector<int>& inorder, vector<int>& postorder){
        if(inorder.empty()){
            return NULL;
        }
        
        vector<int> right, left;
        TreeNode *root = new TreeNode(postorder[postorder.size() - 1]);
        postorder.pop_back();
        
        auto itr = find(inorder.begin(), inorder.end(), root->val);
        copy(itr + 1, inorder.end(), back_inserter(right));
        copy(inorder.begin(), itr, back_inserter(left));
        
        root->right = Build(right, postorder);
        root->left = Build(left, postorder);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return Build(inorder, postorder);
    }
};