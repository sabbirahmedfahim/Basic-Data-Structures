#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    // Node * head = new Node; //we hafta initialize node with value
    Node * head = new Node(10); //remember, head is a Pointer Variable
    Node * random_node = new Node(12);

    // (head->next) = &random_node; //think why '&' cannot be used
    /*
    because we maked a Pointer Variable named 'random_node' which contains
    address of random_node's Node, then why we need to add extra '&' to 
    switch the address??
    Why do we need to say an address as an address of an addresss of a?
    */

   // Using dereference and dot operator
   (*head).next = random_node;

   // Using arrow operator
   head->next = random_node; 

   //Printing values: DESTROY YOUR CONFUSION
   cout<<head->val<<" "<<head->next <<endl;
   /*first thing first, if i go to head->next i will find a pointer that
   will give me address, then why i always get trapped in this and think
   that i will get the value of the group without mentioning the member??
   brother, head->next is the variable named random_node itself*/

   cout<< (*head).val <<" "<< (*(*head).next).val <<endl;

    return 0;
} 