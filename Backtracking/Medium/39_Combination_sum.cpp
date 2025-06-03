
//Time Complexity (Worst Case): O(2^n) where n is the target (though this depends heavily on the structure of the input and pruning).

//Space Complexity (Worst Case): O(C + target) where C is the number of valid combinations.
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        backtrack(0,comb, candidates, target, res);
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
            comb.push_back(cand[i]);
            backtrack(i, comb, cand, target-cand[i],res);
            comb.pop_back();
        }
    }
};