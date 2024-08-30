### What is a Map?

A map is a data structure that stores elements as key-value pairs. For example, in an array, you access values using an index, while in a map, you access values using a key, which can be of any data type, like a string.

While maps are powerful, they have some limitations. For instance, maps have a logarithmic time complexity (O(log n)) for operations like insertion and lookup, which may be slower compared to other data structures for large datasets. In competitive programming, using a map can sometimes lead to Time Limit Exceeded (TLE) errors due to these performance characteristics. Therefore, maps should be used when necessary and when no better alternatives are available.