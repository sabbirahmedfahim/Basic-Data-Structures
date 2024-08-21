/*
vector <int> v;
void postOrder(TreeNode * root)
{
    if(root == NULL) return;
    postOrder(root->left); 
    postOrder(root->right);
    v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    postOrder(root);
    return v;
}   
*/