//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(nums,0,res);
        return res;
    }

    void backtrack(vector<int> &nums, int n, vector<vector<int>> &res)
    {
        if(n==nums.size())
        {
            res.push_back(nums);
            return;
        }
        for (int i = n; i < nums.size(); i++) {
            swap(nums[n], nums[i]);
            backtrack(nums, n + 1, res);
            swap(nums[n], nums[i]);
        }
    }
    void swap(int &a, int &b)
    {
        int t=a;
        a=b;
        b=t;
    }
};