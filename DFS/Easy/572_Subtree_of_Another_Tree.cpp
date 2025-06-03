//Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.
//A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        if(is_ssame(root,subRoot)) return true;
        return isSubtree(root->left, subRoot) + isSubtree(root->right, subRoot);
    }

    bool is_ssame(TreeNode* r1, TreeNode* r2)
    {
        if (!r1 && !r2) return true;
        if (!r1 || !r2) return false;
        if(r1->val != r2->val) return false;
        return is_ssame(r1->left, r2->left) && is_ssame(r1->right, r2->right);
    }
};