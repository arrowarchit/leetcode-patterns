//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

//You must write an algorithm that runs in O(n) time.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {         //Sorting O(nlogn)time, O(1) space
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        sort(nums.begin(), nums.end());

        int seq = 1, res = 1;  // start with 1 to count the first element
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) continue; // skip duplicates
            if(nums[i] == nums[i - 1] + 1) {
                seq++;
            } else {
                res = max(res, seq);
                seq = 1;
            }
        }
        return max(res, seq); // check last sequence i.e. if we never break to check max in loop
    }
};



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {         //O(n) time , give TLE for 3 cases, O(1)space
        int res=0;
        unordered_map<int, bool> seen;

        for(int i=0;i<nums.size();i++)
            seen[nums[i]]=true;

        for(int i=0;i<nums.size();i++)
            if(seen.count(nums[i]-1)>0)
                seen[nums[i]]=false;

        for(int i=0;i<nums.size();i++){
            if(seen[nums[i]]==true){
                int count=0,j=0;
                while(seen.count(nums[i]+j)>0){
                    j++;
                    count++;
                }
                if(count>res) res = count;
            }
        }
        return res;
    }
};


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {         // O(n) time ,O(1)space
        int out=0;
        unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }

        for(int num : nums){
            if(set.find(num-1) == set.end()){
                int curr=num;
                int cons=1;
                while(set.find(curr+1)!=set.end()){
                    curr++;
                    cons++;
                }
                out=max(out,cons);
            }
        }
        return out;
    }
};




class Solution {
public:
    int longestConsecutive(vector<int>& nums) {          //BEST O(n) time ,O(1)space
        unordered_set<int> numSet(nums.begin(), nums.end());
        int out = 0;

        for (int num : numSet) {  // iterate only unique elements
            if (!numSet.count(num - 1)) {  // start of a sequence
                int curr = num;
                int cons = 1;

                while (numSet.count(curr + 1)) {
                    curr++;
                    cons++;
                }
                out = max(out, cons);
            }
        }
        return out;
    }
};