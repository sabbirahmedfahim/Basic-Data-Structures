#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front(); // p for parent
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *MyLeft;
        Node *MyRight;
        if (l == -1)
            MyLeft = NULL;
        else
            MyLeft = new Node(l);
        if (r == -1)
            MyRight = NULL;
        else
            MyRight = new Node(r);
        p->left = MyLeft;
        p->right = MyRight;

        // 3. children gulu ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->data << " ";

        // 3. tar children gulu k rakha
        // if(f->left) means if(f->left != NULL) i.e NULL value is false
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int count_leafNodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        int l = count_leafNodes(root->left);
        int r = count_leafNodes(root->right);
        return l + r;
    }
}
int main()
{
    Node *root = input_tree();
    cout << count_leafNodes(root);
    return 0;
}