//O(k*n) time and space complexity both, where k in number of unique permutation.

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_set<string> mp;
        findperm(nums, 0, mp, res);
        return res;
    }
    void findperm(vector<int> &nums, int i, unordered_set<string> &mp, vector<vector<int>> &res)
    {
        if(i==nums.size())
        {
            string st;
            for(auto x : nums)
            {
                st+=to_string(x)+ ",";
            }
            if(mp.count(st)) return;
            res.push_back(nums);
            mp.insert(st);
            return;
        }
        for (int z = i; z < nums.size(); z++) {
            swap(nums[i], nums[z]);
            findperm(nums, i + 1, mp, res);
            swap(nums[i], nums[z]);
        }
    }
    void swap(int &a, int &b)
    {
        int tmp;
        tmp=a;
        a=b;
        b=tmp;
    }
};