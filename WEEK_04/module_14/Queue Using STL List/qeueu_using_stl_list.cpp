#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    void push(int data)
    {
        l.push_back(data);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty(); // minimalistic
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int data;
        cin >> data;
        q.push(data);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    

    return 0;
}