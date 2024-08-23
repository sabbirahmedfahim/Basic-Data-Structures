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
Node * input_tree()
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
        Node *parent = q.front(); 
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
        parent->left = leftChild;
        parent->right = rightChild;

        // 3. children gulu ke push koro
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root; // note the line, it's holds the entire data
}
void level_order(Node *root)
{
    if(root == NULL)
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
int main()
{
    Node * root = input_tree();
    level_order(root);
    return 0;
}