//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

class Solution {
public:
    int singleNumber(vector<int>& nums) {       //XOR, O(n)
        int n=nums.size();
        int xr=nums[0];
        for (int i=1;i<n;i++)
        {
            xr=xr ^ nums[i];
        }
        return xr;
    }
};


class Solution {
public:
    int singleNumber(vector<int>& nums) {       //Sorting, O(nlogn)
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};