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
void level_order(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    int flag = 0;
    int flag2 = 100;
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
        {
            flag++;
            cout << endl << flag << endl;
            q.push(f->left);
        }
        if (f->right)
        {
            flag2++;
            cout << flag2 << endl;
            q.push(f->right);
        }
    }
}
int main()
{
    // visual representation of the connection is attached as an image

    // connection
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;
    level_order(root);

    return 0;
}