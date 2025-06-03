//Given an array nums of size n, return the majority element.

//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {          //O(n)time, O(1)space
        int res;
        int maj=0;
        for(auto n : nums)
        {
            if(maj==0)
            {
                res=n;
            }
            if(n==res)maj+=1;
            else maj+=-1;
        }
        return res;
    }
};


class Solution {
public:
    int majorityElement(vector<int>& nums) {              //O(n)time, O(n)space hashmap
        unordered_map<int, int> seen;
        int n=nums.size();
        for(auto i : nums)
        {
            seen[i]++;
            if(seen[i]>n/2)
            {
                return i;
            }
        }
        return 0;
    }
};