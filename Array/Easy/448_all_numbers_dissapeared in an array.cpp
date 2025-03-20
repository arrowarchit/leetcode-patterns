class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {         //O(n)space vector, O(n)
        int n=nums.size();
        vector<int> v(n+1,0);
        vector<int> ans;
        int i;
        for(i=0;i<n;i++)
        {
            v[nums[i]]++;
        }
        for(i=1;i<=n;i++)
        {
            if(v[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {         //O(1) space, negative value, O(n)
        int i;
        vector<int> ans;
        for (i=0;i<nums.size();i++)
        {
            nums[abs(nums[i])-1]= -abs(nums[abs(nums[i])-1]);
        }
        for (i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};