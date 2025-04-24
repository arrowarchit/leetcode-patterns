//Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {            //DFS O(n) time, O(n) space
        if(!root) return false;
        return checksum(root, 0, targetSum);
    }

    bool checksum(TreeNode* root, int curr_sum, int targetSum){
        if(!root)return false;
        if(!root->left && !root->right && targetSum==curr_sum+root->val) return true;
        return checksum(root->left,curr_sum+root->val,targetSum) + checksum(root->right,curr_sum+root->val,targetSum);
    }
};


class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        stack<tuple<TreeNode*, int>> toDo;
        toDo.push({root, 0});

        while (!toDo.empty()) {
            TreeNode* curr;
            int sum;

            tuple<TreeNode*, int> popped = toDo.top();
            toDo.pop();
            tie(curr, sum) = popped;

            int newSum = sum + curr->val;
            if (curr->left == nullptr && curr->right == nullptr && newSum == targetSum)
                return true;
            if (curr->left != nullptr) toDo.push({curr->left, newSum});
            if (curr->right != nullptr) toDo.push({curr->right, newSum});
        }
        return false;
    }
};