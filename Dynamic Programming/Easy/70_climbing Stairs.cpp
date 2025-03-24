//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
public:
    int climbStairs(int n) {                    //Bottom up approach O(n) space, O(n)
        if(n==0) return 1;
        if(n==1) return 1;

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;

        for (int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];

        return dp[n];
    }
};


class Solution {
public:
    int climbStairs(int n) {                    // Space Optimised O(1) space, O(n)
        if(n==0) return 1;
        if(n==1) return 1;

        int current=1;
        int prev=1;
        int temp;
        for (int i=2;i<=n;i++)
        {
            temp=current;
            current=current + prev;
            prev=temp;
        }
        return current;
    }
};