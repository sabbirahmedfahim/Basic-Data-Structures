# insert at tail

    void insert_at_tail(Node *&head, int vl) 
    {
    Node *newNode = new Node(vl);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
    }

**Notice**: At the very first time, when the head is NULL, I linked it with newly maked node, called newNode && return, means executing from the insert_at_tail function.

Now, in the second time, the if condition do not match because head has a value. Okay, another thing is-- which I say most important noticable point, when we again go through the function, we initialize a new data type called newNode and assign value, which is not yet connected to any node, like newly initialized int value.

### Problem:
Then the work is very logical and simple. But I hafta think how the node named head is connected to other nodes because we linked using temp node. It is much crutial to understand. InshaAllah I will manage it.

### Solution:

    void insert_at_tail(Node *&head, int vl) 
    {
    Node *newNode = new Node(vl);
    if (head == NULL)
    {
        head = newNode; 
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;  
    }
    temp->next = newNode; 
    }

If you deeply notice--

    head = newNode;
and

    Node *temp = head;
    temp->next = newNode;


that means head is connected through  the newNode.

**Phitron_Support:** temp কিন্তু শুরুতে হেডে থাকে।
তখন আমরা টেম্পের নেক্সটে যেটা এড করছি সেটা হেডের নেক্সটেই অ্যাড হচ্ছে আসলে।