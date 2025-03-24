//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {         // Brute Force O(n2)
            int n=nums.size();
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if (nums[i] == nums[j])
                        return true;
                }
            }
            return false;
        }
    };


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {           // Sorting O(nlogn)
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i;
        for (i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {           // Unordered Set O(n)
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0)
                return true;
            seen.insert(num);
        }
        return false;
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {           // Hash Map O(n)
        unordered_map<int, int> seen;
        for (int n=0; n<nums.size(); n++) {
            if (seen[nums[n]] >= 1)
                return true;
            seen[nums[n]]++;
        }
        return false;
    }
};
