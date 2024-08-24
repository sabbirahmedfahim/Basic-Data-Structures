// my approach
/*
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int rootVal = root->val;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* p = q.front();
            q.pop();
            if(p->val != rootVal || p->val != rootVal) return false;
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
        return true;
    }
};
*/

// using recursion (with instructors help)
/*
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(!root) return true;
        if(root->left && root->left->val != root->val) return false;
        if(root->right && root->right->val != root->val) return false;
        bool l = isUnivalTree(root->left);
        bool r = isUnivalTree(root->right);
        return (l && r);
    }
};
*/