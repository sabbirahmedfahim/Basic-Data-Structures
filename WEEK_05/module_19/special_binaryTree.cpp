// copied from instructor (kinda annoying for me)
/*
bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{ 
    if(!root->left && !root->right) return true;
    else if(!root->left || !root->right) return false;
    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    if(!l || !r) return false;
    return true;
}
*/