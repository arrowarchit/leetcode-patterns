//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {        //O(n) time , O(1) space
        int n=nums.size();
        int idx=0;
        int tmp;
        for (int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                tmp=nums[idx];
                nums[idx]=nums[i];
                nums[i]=tmp;
                idx++;
            }
        }
    }
};