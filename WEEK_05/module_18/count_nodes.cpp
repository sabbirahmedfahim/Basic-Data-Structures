// instructors approach
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
int countNodes(Node * root)
{
    if(root == NULL) return 0;
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l+r+1;
}
int main()
{
    Node * root = input_tree();
    cout << countNodes(root);
    return 0;
}


// My Approach
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *right;
//     Node *left;
//     Node(int data)
//     {
//         this->data = data;
//         this->right = NULL;
//         this->left = NULL;
//     }
// };
// Node * input_tree()
// {
//     int val;
//     cin >> val;
//     Node *root;
//     if (val == -1)
//         root = NULL;
//     else
//         root = new Node(val);
//     queue<Node *> q;
//     if (root)
//         q.push(root);
//     while (!q.empty())
//     {
//         // 1. ber kore ano
//         Node *p = q.front(); // p for parent
//         q.pop();

//         // 2. jabotiyo ja kaj ache
//         int l, r;
//         cin >> l >> r;
//         Node *leftChild;
//         Node *rightChild;
//         if (l == -1)
//             leftChild = NULL;
//         else
//             leftChild = new Node(l);
//         if (r == -1)
//             rightChild = NULL;
//         else
//             rightChild = new Node(r);
//         p->left = leftChild;
//         p->right = rightChild;

//         // 3. children gulu ke push koro
//         if (p->left)
//             q.push(p->left);
//         if (p->right)
//             q.push(p->right);
//     }
//     return root;
// }
// void level_order(Node *root)
// {
//     if(root == NULL)
//     {
//         cout << "Tree nai" << endl;
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         // 1. ber kore ana
//         Node *f = q.front();
//         q.pop();

//         // 2. jabotiyo ja kaj ache
//         cout << f->data << " ";

//         // 3. tar children gulu k rakha
//         // if(f->left) means if(f->left != NULL) i.e NULL value is false
//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
// }
// int countNodes(Node * root)
// {
//     int cnt = 0;
//     queue <Node*> q;
//     if(root) q.push(root);
//     while (!q.empty())
//     {
//         Node * p = q.front();
//         q.pop();
//         cnt++;
//         if(p->left) q.push(p->left);
//         if(p->right) q.push(p->right);
//     }
//     return cnt;
// }
// int main()
// {
//     Node * root = input_tree();
//     cout << countNodes(root);
//     return 0;
// }