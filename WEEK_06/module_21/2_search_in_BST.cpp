// BST == ??

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
        Node *leftChild;
        Node *rightChild;
        if (l == -1)
            leftChild = NULL;
        else
            leftChild = new Node(l);
        if (r == -1)
            rightChild = NULL;
        else
            rightChild = new Node(r);
        p->left = leftChild;
        p->right = rightChild;

        // 3. children gulu ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void print_level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->data << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
bool insertNode(Node * root, int x)
{
    if(!root) return false;
    if(root->data == x) return true;
    if(x < root->data) return insertNode(root->left, x);
    else return insertNode(root->right, x);
    // think why we /return insertNode(root, x)/ rather than calling /insertNode(root, x)/ ??
}
int main()
{
    Node * root = input_tree();
    int x;
    cin >> x;
    if(insertNode(root, x)) cout << "found";
    else cout << "not found!";

    return 0;
}