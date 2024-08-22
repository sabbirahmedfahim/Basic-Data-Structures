/*
Problem Link: https://leetcode.com/problems/deepest-leaves-sum/
*/
// copied from instructor but I guess I can do it without any clue
/*
class Solution {
public:
    int maxHeight(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);
        return max(l, r) + 1;
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = maxHeight(root);
        int ans = 0;

        queue<pair<TreeNode*, int>> q;
        q.push({root, 1}); 
        while (!q.empty()) {
            pair<TreeNode*, int> parent = q.front();
            TreeNode* myNode = parent.first;
            int level = parent.second;
            q.pop();

            if (level == h) ans+=myNode->val;
            if (myNode->left)
                q.push({myNode->left, level + 1});
            if (myNode->right)
                q.push({myNode->right, level + 1});
        }
        return ans;
    }
};
*/