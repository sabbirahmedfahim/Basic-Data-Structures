/*
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    if(!root) return 0;
    queue <BinaryTreeNode <int> * q;
    p.push(root);
    while(!q.empty())
    {
        BinaryTreeNode <int> * p = q.front();
        q.pop();
        if(p->left) return p->left->data;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
*/