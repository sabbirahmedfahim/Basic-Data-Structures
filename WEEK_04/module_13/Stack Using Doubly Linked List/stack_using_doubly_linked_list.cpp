// before entering the file, make sure you revised "Stack using Array" folder.

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
class myStack
{
public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int data) // O(1)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop() // O(1)
    {
        sz--; 
        // Hum pop khali ho ya na ho, hum main function mein control karte hain.
        Node * deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL) 
        {
            head = NULL; // imagine
        }
        else 
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top() // O(1)
    {
        return tail->data; // we have the access of tail. huh
    }
    int size() // O(1) // akalmand ko ishara kafi hai
    {
        return sz;
    }
    // int size() // O(N)
    // {
    //     int count = 0;
    //     while (head != NULL)
    //     {
    //         count++;
    //     }
    //     return count;
    // }
    bool empty() // O(1)
    {
        // if (size == 0)
        if (sz == 0)
            return true;
        else
            return false;
    }
    /*If you deeply notice how size is increased/decreased here, we'll understand
    why the time complexity of size is O(1) rather than O(N)*/
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