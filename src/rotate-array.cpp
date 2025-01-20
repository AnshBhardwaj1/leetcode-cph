#include <bits/stdc++.h>
#include <vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        


        int len = nums.size();
        k = k % len;
        //reversing first half
        for (int i = 0 ; i < (len-k)/2;i++){
            swap(nums[i],nums[len-k-i-1]);
        }

        //reversing second half
        for (int i = 0 ; i < k/2 ;i++){
        swap(nums[len - k + i], nums[len - 1 - i]);
        }

        //reversing all of it
        for (int i =0; i<len/2;i++){
            swap (nums[i],nums[len-1-i]);
        }
        
    }
};