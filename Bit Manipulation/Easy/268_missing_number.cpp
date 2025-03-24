//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
public:
    int missingNumber(vector<int>& nums) {              //Sorting, O(nlogn)
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for (int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
    return n;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {              //O(n) space vector, O(n)
        int n = nums.size();
        vector<int>v(n+1,-1);
        for(int i =0;i<nums.size();i++){
            v[nums[i]] = nums[i];
        }
        for(int i =0;i<v.size();i++){
            if(v[i]==-1)return i;
        }
        return 0;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {              //Arithmatic Sum, O(n)
        int n=nums.size();
        int sum=n*(n+1)/2;
        for (int i=0;i<n;i++)
        {
          sum=sum-nums[i];
        }
    return sum;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {              //XOR, O(n)
        int n=nums.size();
        int xorr = 0;
        for(int i=1;i<=n;i++)
        {
            xorr=xorr ^ i;
        }
        for(int j=0;j<n;j++)
        {
            xorr=xorr ^ nums[j];
        }
        return xorr;
    }
};