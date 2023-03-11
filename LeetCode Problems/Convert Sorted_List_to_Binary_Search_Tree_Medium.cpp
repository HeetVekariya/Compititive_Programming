//Author  : Heet Vekariya
//Purpose : Convert Sorted List to Binary Search Tree
//Date    : 11/3/2023


/*

Given the head of a singly linked list where elements are sorted in ascending order, convert it to a 
height-balanced binary search tree.


Constraints:
-> The number of nodes in head is in the range [0, 2 * 104].
-> -105 <= Node.val <= 105

*/


#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
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

    TreeNode* binary_tree(vector<int> v, int start, int end){
        if(start > end) return NULL;

        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(v[mid]);
        root->left = binary_tree(v, start, mid - 1);
        root->right = binary_tree(v, mid + 1, end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        ListNode *ptr = head;
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        return binary_tree(v, 0, v.size()-1);
    }
};