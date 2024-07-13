# Vector VS Array

Static array's limitation is we can't initialize an array without giving a size. On the other hand, vector gives us the option of dynamic array in which we can initialize it without size and the size increases/decreases after push/pop which is an efficient solution for memory consumption. 

    int arr[5] = {10, 20, 30, 40, 50};

In Addition, if we wanna put a value in 3rd index, we hafta increase the size of the entire array, but static array has it's limition. What's the solution then?

    vector <int> v = {10, 20, 30, 40, 50};
    cout << v.size() << endl; // output: 5
    v.pushback(60);
    cout << v.size() << endl; // output: 6

### Vector supports various data types such as...
    vector <string> v1;
    vector <double> v2;

### Anyway, let's recap the Dynamic Array concept

    int * arr = new int[size];
    for (...);
    delete[] arr;

However, **vector** in C++ is similar to a dynamic array but with additional features and benefits that make it more powerful and easier to use. 