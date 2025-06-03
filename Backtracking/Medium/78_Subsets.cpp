//Given an integer array nums of unique elements, return all possible subsets (the power set).
//The solution set must not contain duplicate subsets. Return the solution in any order.

//Time complexity: O(2^n)
//n is number of elements in the input array. We have two choices for each number. For examples, length of input array is 3(= n), output should be 2 * 2 * 2 = 8 subsets.
//Space complexity: O(2^n)

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        backtrack(nums,0, subset,res);
        return res;
    }
    void backtrack(vector<int> nums, int n, vector<int> subset, vector<vector<int>> &res)
    {
        if(n==nums.size())
        {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[n]);
        backtrack(nums,n+1, subset,res);
        subset.pop_back();
        backtrack(nums,n+1, subset,res);
    }
};