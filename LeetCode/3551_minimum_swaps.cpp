#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

static bool compare(pair<int, int> a, pair<int, int> b){
    int digit_sum_1 = 0;
    int digit_sum_2 = 0;
    int x = a.first;
    int y = b.first;

    while(x!=0){
        digit_sum_1 += x%10;
        x = x/10;
    }

    while(y!=0){
        digit_sum_2 += y%10;
        y = y/10;
    } 

    if(digit_sum_1 == digit_sum_2)
    return a.first < b.first;

    return digit_sum_1<digit_sum_2;
}

    int minSwaps(vector<int>& nums) {
        vector<pair<int, int>> arr(nums.size());
        for(int i=0; i<nums.size(); i++){
            arr[i].first = nums[i];
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end(), compare);
        int swaps = 0 ;
        int n = nums.size();
        vector<int> visited(nums.size(), 0);

       for(int i=0; i<nums.size(); i++){
        if(visited[arr[i].second] == 0){
            int cycles = 1;
            visited[arr[i].second] = 1;
            int j = arr[i].second;
            while(j != i){
                j = arr[j].second;
                cycles++;
                visited[j] = 1;
            }
            swaps += cycles - 1;
        }
       }

       return swaps;
    }
};