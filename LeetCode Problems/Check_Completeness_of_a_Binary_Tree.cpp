//Author  : Heet Vekariya
//Purpose : Check Completeness of a Binary Tree
//Date    : 15/3/2023

/*

Given the root of a binary tree, determine if it is a complete binary tree.

In a complete binary tree, every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.


Constraints:

-> The number of nodes in the tree is in the range [1, 100].
-> 1 <= Node.val <= 1000

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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        bool flag = false;

        while(!q.empty()){
            TreeNode *curr = q.front();
            q.pop();

            if(curr->left){
                if(flag) return false;
                q.push(curr->left);
            }
            else flag = true;
            
            if(curr->right){
                if(flag) return false;
                q.push(curr->right);
            }
            else flag = true;
        }
        return true;
    }
};