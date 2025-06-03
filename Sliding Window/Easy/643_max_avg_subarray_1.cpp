//You are given an integer array nums consisting of n elements, and an integer k.

//Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double res;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        int mxs=sum;
        for(int i=1;i<=nums.size()-k;i++)
        {
            sum=sum-nums[i-1]+nums[i+k-1];
            if(sum>mxs)
                mxs=sum;
        }
        res = double(mxs)/k;
        return res;
    }
};