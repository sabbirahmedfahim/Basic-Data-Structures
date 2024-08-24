// instructors code
/*
class Solution {
public:
    int sum = 0;
    int postorder(TreeNode * root)
    {
        if(!root) return 0;
        int l = postorder(root->left);
        int r = postorder(root->right);
        sum+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        postorder(root);
        return sum;
    }
};
*/