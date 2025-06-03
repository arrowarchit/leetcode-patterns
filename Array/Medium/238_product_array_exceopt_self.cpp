//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//**
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {        //O(n) time, O(n)space
        int n=nums.size();
        vector<int> res(n);
        vector<int> pre(n);
        vector<int> suff(n);
        pre[0]=1;
        suff[n-1]=1;
        int i,j;
        for(i=1;i<=n-1;i++)
        {
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(j=n-2;j>=0;j--)
        {
            suff[j]=suff[j+1]*nums[j+1];
        }
        for(int i = 0; i < n; i++) {
            res[i] = pre[i] * suff[i];
        }
        return res;
    }
};



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {      //O(n) time, O(1)space
        int n=nums.size();
        vector<int> res(n,1);
        int curr=1;
        for(int i=0;i<n;i++)
        {
            res[i]*=curr;
            curr*=nums[i];
        }
        curr=1;
        for(int i=n-1;i>=0;i--)
        {
            res[i]*=curr;
            curr*=nums[i];
        }
        return res;
    }
};