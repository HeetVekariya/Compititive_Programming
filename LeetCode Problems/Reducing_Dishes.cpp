//Author  : Heet Vekariya
//Purpose : Reducing Dishes
//Date    : 29/3/2023

/*
A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.

Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. time[i] * satisfaction[i].

Return the maximum sum of like-time coefficient that the chef can obtain after dishes preparation.

Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.


Constraints:

-> n == satisfaction.length
-> 1 <= n <= 500
-> -1000 <= satisfaction[i] <= 1000

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int ans = 0;
        sort(satisfaction.begin(), satisfaction.end());
        
        for(int i = 0; i < satisfaction.size(); i++){
            int sum = 0, idx = 1;
            for(int j = i; j < satisfaction.size(); j++){
                sum += (satisfaction[j] * idx);
                idx++;
            }
            ans = fmax(ans, sum);
        }
        return ans;
    }
};