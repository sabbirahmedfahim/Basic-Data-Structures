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
int sumLeafs(Node * root)
{
    int sum = 0;
    queue <Node *> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * p = q.front();
        q.pop();
        if(!p->left && !p->right) sum+=p->data;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return sum;
}
int main()
{
    Node * root = input_tree();
    cout << sumLeafs(root);

    return 0;
}