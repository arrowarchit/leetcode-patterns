//Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
//A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

class Solution {
public:
    bool isSubsequence(string s, string t) {        //O(n) time, O(1)space
        int ps=0;
        int ns=s.size();
        int nt=t.size();
        for(int i=0; i<nt; i++)
        {
            if(s[ps]==t[i] and ps<ns)
            {
                ps++;
            }
        }
        if(ps==ns) return true;
        return false;
    }
};