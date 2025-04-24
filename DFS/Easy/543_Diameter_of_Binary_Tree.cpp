//Given the root of a binary tree, return the length of the diameter of the tree.
//The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
//The length of a path between two nodes is represented by the number of edges between them.

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {          //DFS
        if(!root) return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        return max( max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)), lheight + rheight);
    }

    int height(TreeNode* root)
    {
        if(!root) return 0;
        return max(height(root->left)+1, height(root->right)+1);
    }

};