//**

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_set<string> mp;
        vector<int> subset;
        sort(nums.begin(), nums.end());                 //**
        create_subset(nums, 0, subset, mp, res);
        return res;
    }

    void create_subset(vector<int>& nums, int i, vector<int>& subset, unordered_set<string>& mp, vector<vector<int>>& res) {
        if(i == nums.size()) {
            string st;
            for (int s : subset) {
                st += to_string(s) + ",";               //**
            }
            if(mp.count(st)) return;
            res.push_back(subset);
            mp.insert(st);
            return;
        }
        subset.push_back(nums[i]);
        create_subset(nums, i + 1, subset, mp, res);
        subset.pop_back();
        create_subset(nums, i + 1, subset, mp, res);
    }
};
