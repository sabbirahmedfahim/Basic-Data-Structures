/*
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root, 1});
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> p = q.front();
        TreeNode<int>* myNode = p.first;
        int level = p.second;
        q.pop();

        if(myNode->val == searchedValue) return level;
        if(myNode->left) q.push({myNode->left, level+1});
        if(myNode->right) q.push({myNode->right, level+1});
    }
}
*/