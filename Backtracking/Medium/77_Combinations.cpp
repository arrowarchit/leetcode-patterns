//

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> comb;
        backtrack(1, n, k, comb, res);
        return res;
    }

    void backtrack(int start, int n, int k, vector<int>& comb, vector<vector<int>>& res) {
        if (comb.size() == k) {
            res.push_back(comb);
            return;
        }

        // Prune if remaining numbers are insufficient
        for (int i = start; i <= n - (k - comb.size()) + 1; ++i) {
            comb.push_back(i);
            backtrack(i + 1, n, k, comb, res);
            comb.pop_back();
        }
    }
};