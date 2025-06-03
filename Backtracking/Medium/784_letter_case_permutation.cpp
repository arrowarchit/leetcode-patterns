//Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

//Return a list of all possible strings we could create. Return the output in any order.


class Solution {
public:
    vector<string> letterCasePermutation(string s) {      //O(2^n) time and O(n)space for max active recursive calls
        vector<string> ans;
        backtrack(ans, s, "", 0);
        return ans;
    }
    void backtrack(vector<string> &ans, string s, string perm, int n)
    {
        if(n==s.size()){
            ans.push_back(perm);
            return;
        }
        if(isdigit(s[n]))
        {
            perm.push_back(s[n]);
            backtrack(ans, s, perm, n+1);
        }
        else
        {
            string lowerperm=perm;
            lowerperm.push_back(tolower(s[n]));
            backtrack(ans, s, lowerperm, n+1);

            string upperperm=perm;
            upperperm.push_back(toupper(s[n]));
            backtrack(ans, s, upperperm, n+1);
        }

    }
};