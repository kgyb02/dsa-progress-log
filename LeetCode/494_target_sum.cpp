
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recursionFunc(vector<int>& nums, int target, int i, int sum){
    if(i == nums.size()){
        if(sum == target)
        return 1;
        return 0;
    }

    return recursionFunc(nums, target, i+1, sum + nums[i]) + recursionFunc(nums, target, i+1, sum - nums[i]);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int result = 0;
        result = recursionFunc(nums, target, 0, 0);
        return result;
    }
};