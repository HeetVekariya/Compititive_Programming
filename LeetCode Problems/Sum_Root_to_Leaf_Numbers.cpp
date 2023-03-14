//Author  : Heet Vekariya
//Purpose : Sum Root to Leaf Numbers
//Date    : 14/3/2023

/*

You are given the root of a binary tree containing digits from 0 to 9 only.
Each root-to-leaf path in the tree represents a number.

-> For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.

Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.
A leaf node is a node with no children.


Constraints:

-> The number of nodes in the tree is in the range [1, 1000].
-> 0 <= Node.val <= 9
-> The depth of the tree will not exceed 10.
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
    int traverse(TreeNode* root, int var) {
        if(root == NULL)
            return 0;
        var = (var * 10 + root->val);
        if(root->left == NULL && root->right == NULL) return var;

        return (traverse(root->left, var) + traverse(root->right, var));
    }
    int sumNumbers(TreeNode* root) {
        return traverse(root, 0);
    }
};