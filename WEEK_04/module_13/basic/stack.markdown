## What is Stack?

A Stack is a **Data Structure** that follows the LIFO principle, meaning data is inserted at the top and also removed from the top.

LIFO => Last In, First Out.

And? 

A stack is a higher-level data structure and an example of an abstract data type (ADT).

ADT => Abstruct Data Structure

And And?

A stack is a theoretical concept, not a 'NEW' data structure. It uses existing containers like arrays and linked lists. A stack does not create data structures but employs the concept of the LIFO technique — Last In, First Out.

The last data can be accessed using arrays or linked lists. Think of the last index in an array or the tail of a linked list. Essentially, when working with arrays, the last index is n-1, and in lists, it's the previous tail.

### Then why do we need to create a "NEW" data structure? We already have arrays and lists for these operations.

It's true that arrays and linked list is created for different reasons in some point. However, the stack says I need the last point, whatever you use - array, lists-- it doesn't cares. 

Oh yes. We can also insert at the end (tail/last index) of lists and arrays. Now I'm convinced that I already have several data structures capable of handling these tasks. Stack is simply a concept. 

![alt text](image.png)

Hence, our primary concern with a stack is often with the tail or last index. As we know, when inserting at the tail, a doubly linked list is preferable over a singly linked list.

Now let's analyze the time complexity and deletion for inserting at the tail:

1. Static Array (can't delete memory) ✗
2. Dynamic Array - O(1) ✓
3. Singly Linked List - O(N) ✗
4. Doubly Linked List - O(1) ✓ 
5. List (STL) - O(1) ✓

Note: We'll use list (STL) instead of doubly linked list. Because we know that list is a library of doubly linked list.


### What are lower-level data structures?

Arrays and linked lists are examples of lower-level data structures. They are often referred to as containers.

![alt text](image.png)