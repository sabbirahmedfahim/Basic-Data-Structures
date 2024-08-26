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
Node * convertArrayToBST(int arr[], int n, int l, int r)
{
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node * root = new Node(arr[mid]);
    Node * leftRoot = convertArrayToBST(arr, n, l, mid-1);
    Node * rightRoot = convertArrayToBST(arr, n, mid+1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int n; 
    cin >> n; 
    int arr[n]; // array must be sorted(accending order)
    for (int i = 0; i < n; i++) cin >> arr[i];
    Node * root = convertArrayToBST(arr, n, 0, n-1);
    level_order(root);

    return 0;
}