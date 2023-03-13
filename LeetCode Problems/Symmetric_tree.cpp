//Author  : Heet Vekariya
//Purpose : Symmetric Tree
//Date    : 13/3/2023


/*

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Constraints:

-> The number of nodes in the tree is in the range [1, 1000].
-> -100 <= Node.val <= 100
*/
#include<bits/stdc++.h>
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
    bool recursion(TreeNode *Rleft, TreeNode *Rright){
        if(Rleft == NULL && Rright == NULL){
            return true;
        }
        else if(Rleft == NULL || Rright == NULL){
            return false;
        }
        else{
            return (recursion(Rleft->left, Rright->right) && recursion(Rleft->right, Rright->left) && Rleft->val == Rright->val);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return root;

        return recursion(root->left, root->right);   
    }

    /*
    void inorder(TreeNode *temp, vector<int>& v)
    {
        if (temp != NULL)
        {
            inorder(temp->left, v);
            if(!(temp->val == NULL)) v.push_back(temp->val);
            else v.push_back(5000);
            inorder(temp->right, v);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return root;

        vector<int> v_left;
        vector<int> v_right;
        inorder(root->left, v_left);
        inorder(root->right, v_right);

        reverse(v_right.begin(), v_right.end());
        return v_left == v_right;
    }
*/

};