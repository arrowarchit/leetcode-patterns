//A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

class Solution {
public:
    int maxDepth(TreeNode* root) {          //DFS O(n) time and O(n) space worst case else height of the tree.
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        return  max(maxDepth(root->left)+1, maxDepth(root->right)+1);
    }
};