// my approach
/*
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root->data == x) return true;
    queue <BinaryTreeNode <int> * > q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode <int> * p = q.front();
        q.pop();
        if(p->data == x) return true;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return false;
}
*/

// instructors approach
/*
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // instructors code
    if (root == NULL)
      return false;
    if (root->data == x)
      return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r);
}
*/
