//Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10-5 of the actual answer will be accepted.
//*
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        double sum=0;                   //int lene se galat ans ayega due to typecasting
        double count=0;                 //int lene se galat ans ayega due to typecasting
        double avg=0;
        while(q.front())
        {
            sum+=q.front()->val;
            count+=1;
            if(q.front()->left) q.push(q.front()->left);
            if(q.front()->right) q.push(q.front()->right);
            q.pop();
            if(q.front()==NULL)
            {
                q.pop();
                avg=sum/count;
                ans.push_back(avg);
                count=0;
                sum=0;
                q.push(NULL);
            }
        }
        return ans;
    }
};