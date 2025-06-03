//Unique combs and no repetition of candidates.

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        sort(candidates.begin(), candidates.end());
        backtrack(0, comb, candidates, target, res);
        return res;
    }
    void backtrack(int idx, vector<int> &comb, vector<int> cand, int target, vector<vector<int>> &res)
    {
        if(target==0)
        {
            res.push_back(comb);
            return;
        }
        if(target<0 || idx>=cand.size()) return;
        for(int i=idx;i<cand.size();i++)
        {
            if (i > idx && cand[i] == cand[i - 1]) continue;
            comb.push_back(cand[i]);
            backtrack(i+1, comb, cand, target-cand[i], res);
            comb.pop_back();
        }
    }
};