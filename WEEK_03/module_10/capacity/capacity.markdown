#### Why doesn't a linked list have a capacity function like a vector?

Unlike a vector, where we sometimes need to increase the capacity of a dynamic array for our needs, a linked list—specifically a doubly linked list—doesn't require capacity adjustment because it dynamically allocates memory for each node as needed. It doesn't increase its size when linked with another node. 

So, why the unnecessary capacity increase? In fact, we use doubly linked lists to achieve better memory efficiency.

