#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node * next; // holds the address of user-defined data type named "Node" 
    /*holds the address of the class/data-type named 'Node', ref (*). So data-type is Node
    For instance, 
    */
    // int *next; // holds the address of an integer;
};
int main()
{
    int a, b;
    Node x, y;

    x.data = 10; 
    y.data = 20; 
    x.next = &y; // Fixed !! 
    // x.next = y; // Quiz: if we write 'y' instead of '&y' why it shows errors?

    cout << x.data << " " << y.data;

    return 0;
}