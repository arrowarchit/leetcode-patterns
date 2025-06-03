//Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {          //O(n)time, O(n)space
        int n=nums.size();
        vector<int> out(n, 0);
        int left=0;
        int right=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(abs(nums[left]) > abs(nums[right]))
            {
                out[i] = nums[left] * nums[left];
                left++;
            }
            else
            {
                out[i] = nums[right] * nums[right];
                right--;
            }
        }
        return out;
    }
};