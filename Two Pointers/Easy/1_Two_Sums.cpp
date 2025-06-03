//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//**

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {     //O(n)time, O(m)space
        unordered_map<int, int> seen;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(seen.count(target-nums[i]))          //read abt count
            {
                return {seen[target-nums[i]],i};
            }
            seen[nums[i]]=i;
        }
        return {};
    }
};