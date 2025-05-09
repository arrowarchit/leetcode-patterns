class Solution {
public:
    int search(vector<int>& nums, int target) {     //O(log n)
        int n=nums.size();
        int left=0;
        int right=n-1;
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target)
                left=mid+1;
            else right=mid-1;
        }
        return -1;
    }
};