//Author  : Heet Vekariya
//Purpose : Binary Search
//Date    : 1/4/2023

/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.


Constraints:

-> 1 <= nums.length <= 104
-> -104 < nums[i], target < 104
-> All the integers in nums are unique.
-> nums is sorted in ascending order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(!binary_search(nums.begin(), nums.end(), target)) return -1;
        
        auto itr = lower_bound(nums.begin(), nums.end(), target);
        return itr - nums.begin();
    }
};