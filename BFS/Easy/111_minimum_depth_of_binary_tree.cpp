//Given a binary tree, find its minimum depth.
//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

class Solution {
public:
    int minDepth(TreeNode* root) {              //BFS O(n) time, O(n) space
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int dp=1;
        while(q.front())
        {
            if(!q.front()->left && !q.front()->right)
            {
                return dp;
            }
            if(q.front()->left) q.push(q.front()->left);
            if(q.front()->right) q.push(q.front()->right);
            q.pop();
            if(q.front()==NULL)
            {
                dp++;
                q.pop();
                q.push(NULL);
            }
        }
        return 0;
    }
};


class Solution {
public:
    int minDepth(TreeNode* root) {          //DFS O(n) time, O(n) worst case space completely unbalanced tree
        return mindep(root);
    }
    int mindep(TreeNode* root)
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        if(root->left && root->right) return min(mindep(root->left)+1, mindep(root->right)+1);
        if(!root->left) return mindep(root->right)+1;
        return mindep(root->left)+1;
    }
};