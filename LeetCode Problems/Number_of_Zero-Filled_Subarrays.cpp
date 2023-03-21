//Author  : Heet Vekariya
//Purpose : Number of Zero-Filled Subarrays
//Date    : 21/3/2023

/*
Given an integer array nums, return the number of subarrays filled with 0.

A subarray is a contiguous non-empty sequence of elements within an array.


Constraints:

-> 1 <= nums.length <= 105
-> -109 <= nums[i] <= 109
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0, subarray = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) count++;
            else {
                subarray += (count * (count + 1))/2;
                count = 0;
            }
        }
        subarray += (count * (count + 1))/2;
        return subarray;
    }
};