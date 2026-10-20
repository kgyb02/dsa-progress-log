#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1)
        return 0;
        
        int temp_back = nums.size()-2;
        int actual_back = nums.size()-1;
        int result = 0;
        int jump_space = 1;

        while(actual_back != 0){
            if(temp_back == -1){
                result++;
                temp_back = actual_back - 1;
                jump_space = 1;
            }

            if(jump_space <= nums[temp_back]){
                actual_back = temp_back;
            }
    
            jump_space++;
            temp_back--;
        }

        return result+1;
    }
};