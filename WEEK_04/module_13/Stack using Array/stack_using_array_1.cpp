#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector <int> v;
    void push(int data) // O(1)
    {
        v.push_back(data); 
    }
    void pop() // O(1)
    {
        v.pop_back(); 
    }
    int top() // O(1)
    {
        return v.back();   
    }
    int size() // O(1) // HOW?
    {
        return v.size();
    }
    bool empty() // O(1)
    {
        if(v.size()==0) return true;
        else return false;  
    }
};
int main()
{
    // myStack * newStack = new myStack; // We do not need dynamic stack
    myStack st;
    // st.pop(); // get access using dot(.). Because myStack is static.
    // Hence, inside myStack, a dynamic vector was initialized.

    return 0;
}