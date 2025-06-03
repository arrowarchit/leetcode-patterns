//Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

class Solution {
public:
    bool backspaceCompare(string s, string t) {     //O(n) time, O(1) space
        s=getvalidstr(s);
        t=getvalidstr(t);
        if(s==t)return true;
        return false;
    }
    string getvalidstr(string s)
    {
        int n=s.size();
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#')
            {
                s[idx]=s[i];
                idx++;
            }
            else if(s[i]=='#' && idx>=0) idx--;
            if(idx<0)idx=0;
        }
        return s.substr(0,idx);
    }
};


//Use stack else for O(n) space