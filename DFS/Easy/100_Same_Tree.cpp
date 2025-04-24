//Given the roots of two binary trees p and q, write a function to check if they are the same or not.

//Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {          //DFS O(n)time and O(n)space
        if(!p && !q) return true;
        if(!p) return false;
        if(!q) return false;
        if(p->val!=q->val) return false;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};