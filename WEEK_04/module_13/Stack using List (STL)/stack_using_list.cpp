// before entering the file, make sure you revised "Stack using Array" folder.

#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list <int> l;
    void push(int data) // O(1)
    {
        l.push_back(data);
    }
    void pop() // O(1)
    {
        l.pop_back();
    }
    int top() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }
    bool empty() // O(1)
    {
        if (l.size() == 0) return true;
        else return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    

    return 0;
}