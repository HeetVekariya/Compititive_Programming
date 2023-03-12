//Author  : Heet Vekariya
//Purpose : Merge k Sorted Lists
//Date    : 12/3/2023

/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.


Constraints:

-> k == lists.length
-> 0 <= k <= 104
-> 0 <= lists[i].length <= 500
-> -104 <= lists[i][j] <= 104
-> lists[i] is sorted in ascending order.
-> The sum of lists[i].length will not exceed 104
*/


// Definition for singly-linked list.
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        vector<int> v;

        for(int i = 0; i < lists.size(); i++){
            ListNode *ptr = (ListNode *)lists[i];
            while(ptr != NULL){
                v.push_back(ptr->val);
                ptr = ptr->next;
            }
        }

        if(v.size() == 0) return NULL;
        sort(v.begin(), v.end());
        ListNode *head = NULL;
        ListNode *ptr;

        for(int i = 0; i < v.size(); i++){
            ListNode *temp = new ListNode(v[i]);

            if(head == NULL){
                head = temp;
                ptr = head;
            } 
            else{
                ptr->next = temp;
                ptr = temp;
            }
        }
        return head;
    }
};