//Given the root of a binary tree, invert the tree, and return its root.

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {      //DFS
        if(!root) return nullptr;
        if(!root->left && !root->right) return root;
        TreeNode* tmp=root->left;
        root->left=root->right;
        root->right=tmp;
        invertTree(root->left);     //Interesting fact we can move these calls before we do the swapping
        invertTree(root->right);
        return root;
    }
};