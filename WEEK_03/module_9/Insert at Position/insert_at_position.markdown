# Insert at Position

![alt text](image.png)
**Most important part**
![alt text](image-1.png)

![alt text](image-2.png)

Explanation for no 3:

    newNode->next->prev = newNode;

Because we can also use the expression: (it has an issue)

    newNode = newNode; //OR
    newNode = temp->next; /both are same

![alt text](image-3.png)

It will not work because we're not switching the Node which address is 3C, and do not change it's prev pointers address, which was-

![alt text](image-4.png)

Now look at the drawing again...

![alt text](image-1.png)

Explanation for 3:

    newNode->next->prev = newNode;

newNode->next means switching the next node which address is 3C, and, yeah it is the game,

    ->prev

It is magical (AKA logical :P), it's point's the adddress of newNode as prev object in the node which address is 3C. If we do not use it how can we get access the the node?

![alt text](image-3.png)

Yes, here is the catch. 

![alt text](image-5.png)