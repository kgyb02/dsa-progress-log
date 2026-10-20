#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        int smaller = 0, equal = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < target)
            smaller++;
            else if(nums[i] == target)
            equal++;
        }

        while(equal != 0){
            result.push_back(smaller);
            smaller++;
            equal--;
        }

        return result;
    }
};