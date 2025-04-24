class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {       //O(n)
        int c;
        int n=letters.size();
        for(c=0;c<n;c++)
        {
            if(letters[c]>target)
                return letters[c];
        }
        return letters[0];
    }
};



class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {           //O(log n)
        int n=letters.size();
        int ans;
        int left=0,right=n-1;
        int mid;
        if(letters[0]>target || letters[n-1]<=target) return letters[0];
        while(left<=right)
        {
            mid=(left+right)/2;
            if(letters[mid]>target)
            {
                right=mid-1;
                ans=mid;
            }
            else
                left=mid+1;
        }
        return letters[ans];
    }
};


