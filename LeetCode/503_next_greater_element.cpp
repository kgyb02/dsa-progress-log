#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s1;

        for(int i = nums.size()-2; i>=0; i--){
         s1.push(nums[i]);
        }

        vector<int> result(nums.size(), -1);

        for(int i=nums.size()-1; i>=0; i--){
            while(!s1.empty()){
                if(s1.top() > nums[i]){
                    result[i] = s1.top();
                    break;
                }
                else
                s1.pop();
            }
            s1.push(nums[i]);
        }

        return result;
    }
};