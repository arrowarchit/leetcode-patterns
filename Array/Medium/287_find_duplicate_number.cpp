//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.
//You must solve the problem without modifying the array nums and using only constant extra space.


class Solution {
public:
    int findDuplicate(vector<int>& nums) {      //Floyd's Tortoise and Hare algorithm
        int fast=nums[0];
        int slow=nums[0];
        int n=nums.size();
        while(1)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast) break;
        }
        int slow2 = nums[0];

        while (slow != slow2) {
            slow = nums[slow];
            slow2 = nums[slow2];
        }
        return slow;
    }
};