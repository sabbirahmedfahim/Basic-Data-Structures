#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    // Node * next; 
    /*holds the address of the class/data-type named 'Node', ref (*). So data-type is Node
    For instance, 
    */
    int *next; // holds the address of an integer;
};
int main()
{
    int a, b;
    Node x, y;

    x.data = 10;
    y.data = 20;
    x.next = &y; // find why it shows error? // Fixed in the next file

    return 0;
}