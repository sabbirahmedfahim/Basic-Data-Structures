// copied from instructor (it was quite complex for me)
/*
vector<int> getLeftView(TreeNode<int> *root)
{
    vector <int> v;
    bool freq[3005] = {false};
    queue <pair<TreeNode<int> *, int>> q;
    if(root) q.push({root, 1});
    while(!q.empty())
    {
        pair<TreeNode<int> *, int> p = q.front();
        q.pop();
        TreeNode<int> * myNode = p.first;
        int level = p.second;
        if(!freq[level]) 
        {
            v.push_back(myNode->data);
            freq[level] = true;
        }
        if(myNode->left) q.push({myNode->left, level+1});
        if(myNode->right) q.push({myNode->right, level+1});
    }
    return v;
}
*/