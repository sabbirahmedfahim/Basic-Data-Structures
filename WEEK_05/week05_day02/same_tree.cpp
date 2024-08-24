/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && q || p && !q) return false;
        queue <TreeNode *> q1, q2;
        if(p) q1.push(p);
        if(q) q2.push(q);
        while(!q1.empty() || !q2.empty())
        {
            TreeNode * f1 = q1.front();
            q1.pop();
            TreeNode * f2 = q2.front();
            q2.pop();
            if(f1->val != f2->val) return false;
            if(f1->left && f2->left)
            {
                q1.push(f1->left);
                q2.push(f2->left);
            }
            else if(!f1->left && f2->left || f1->left && !f2->left)
            {
                return false;
            }
            if(f1->right && f2->right)
            {
                q1.push(f1->right);
                q2.push(f2->right);
            }
            else if(!f1->right && f2->right || f1->right && !f2->right)
            {
                return false;
            }
        }
        return true;
    }
};
*/