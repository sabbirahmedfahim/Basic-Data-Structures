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
    myStack st;
    st.push(20);
    st.push(10);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl; // garbage


    return 0;
}