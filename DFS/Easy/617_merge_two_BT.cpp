//You are given two binary trees root1 and root2.
//Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.
//Return the merged tree.


class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {            //DFS
        if(!root1 && !root2) return nullptr;
        if(!root1) return root2;
        if(!root2) return root1;
        root1->val+=root2->val;
        if(root2->left) root1->left = mergeTrees(root1->left, root2->left);
        if(root2->right) root1->right = mergeTrees(root1->right, root2->right);
        return root1;
    }
};