/*
class Solution {
public:
    vector<int> v1, v2;
    void inOrder(TreeNode* root, int x) 
    {
        if(root == NULL) return;
        inOrder(root->left, x);
        if(!root->left && !root->right)
        {
            if(x == 1) v1.push_back(root->val);
            else if(x == 2) v2.push_back(root->val);
        } 
        inOrder(root->right, x);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inOrder(root1, 1);
        inOrder(root2, 2);
        return v1 == v2;
    }
};
*/