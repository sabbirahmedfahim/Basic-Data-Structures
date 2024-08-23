// copied from instructor (crazy)
/*
int mx = 0;
int maxHeight(TreeNode<int> *root)
{
    if(!root) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    mx = max(mx, l+r);
    return max(l, r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root){
	int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l+r;
    return max(d, mx);
}
*/