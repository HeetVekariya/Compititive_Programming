//Author  : Heet Vekariya
//Purpose : Linked list Random node
//Date    : 10/3/2023

/*
    Given a singly linked list, return a random node's value from the linked list. Each node must have the same probability of being chosen.

Implement the Solution class:

-> Solution(ListNode head) Initializes the object with the head of the singly-linked list head.
-> int getRandom() Chooses a node randomly from the list and returns its value. All the nodes of the list should be equally likely to be chosen.


Constraints:

-> The number of nodes in the linked list will be in the range [1, 104].
-> -104 <= Node.val <= 104
-> At most 104 calls will be made to getRandom.

*/


//Solution:


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
ListNode* head;
public:
    Solution(ListNode* h) {
        head = h;
    }
    int getRandom() {
        ListNode *ptr = head;
        int i = 1, randomIdx, randomNum = -1;
        while(ptr != NULL){
            randomIdx = rand() % i;
            if(randomIdx == i - 1){
                randomNum = ptr->val;
            }
            ptr = ptr->next;
            i++;
        }
        return randomNum;
    }
    
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */