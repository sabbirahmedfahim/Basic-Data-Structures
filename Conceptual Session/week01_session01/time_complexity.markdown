# What is the Constant Time Complexity?

In short, number of operation.


    int a, b;
    int result = a + b;
    cout << result;

In the given code, total operation(means +,-,x,/) is one(which is +). Whatever the take as input, operation will be same. 

![alt text](image.png)

To sum up, time complexity doesn't depends on input values.

<br>
<br>
<br>


# What is O(N)?

case-1:

    for(int i=0; i<n; i++) // O(N)
    {
        int a, b; // O(1)
        int result = a+b; // O(1)
        cout << result; // O(1)
    }

![alt text](image-1.png)

case-2:

    for(int i=0; i<n; i+=2) // O(N)
    {
        // statement
    }

i+=2 means we took a drop of water from the sea. Doesn't matter actually. That's why it is order of n. Complexity will not change whatever the sum is. 

case-3:

    for(int i=0; i < n/2; i+=2) // O(N)
    {
        // statement
    }

n/2 reduces the operation but this is not efficient. Just seperate the constant values from n. 

n * 1/2. 

case-4:

    for(int i=0; i<n; i+=2) // O(N)
    {
        // statement
    }
    for(int i=0; i<n; i+=2) // O(N)
    {
        // statement
    }
    for(int i=0; i<n; i+=2) // O(N)
    {
        // statement
    }

Why O(N)? Let's do the sum;
O(N) + O(N) + O(N) = O(3N) = O(N)

Now you know constant values are not time efficient AKA worthless. That's why...

<br>
<br>
<br>

# What is O(N²) ?

case-1:

    for (int i=0; i<N; i++) // O(N²)
    {
        for (int j=0; j<n; j++)
        {
            // statement
        }
    }

1 barer jonno n bar <br>
N barer jonno N*n bar == N²

case-2:

    for (int i=0; i<n; i++) // O(N²)
    {
        for (int j=i+100; j<n; j++)
        {
            // statement
        }
    }

j=i+100 means we took a drop of water from the sea. Doesn't matter actually. That's why it is order of N².

case-3:

    for (int i=0; i<n; i++) // O(N²)
    {
        for (int j=i+1; j<i; j++)
        {
            // statement
        }
    }

let, n = 100

![alt text](image-2.png)


<br>           
<br>           
<br>

# Let's discuss about O(N³)

case-1:

    for (int i = 0; i < n; i++) // O(N)
    {
      for (int j = 0; j < n; j++) // O(N)
      {
        for (int i = 0; i < n; i++) // O(N)
           {
               // statement
           }
      }
    }

Let's multiply: O(N * N * N) = O(N³)

case-2:

    for (int i = 0; i < n/2; i+= 2) // O(N)
    {
      for (int j = 0; j < n/2; j+= 2) // O(N)
      {
        for (int k = 0; k < n; k+) // O(N)
           {
               // statement
           }
      }
    }


Let's multiply: O(N/2 * N/2 * N) = O(N³/4) = O(N)

case-3:

    for (int i = 0; i < n/2; i+= 2) // O(N)
    {
      for (int j = 0; j < n/2; j+= 2) // O(N)
      {
        for (int k = 0; k < m; k+) // O(N)
           {
               // statement
           }
      }
    }

Let's analyze: O(N² M) [not N³]

<br>
<br>
<br>

# What is O(logN)?

    for (int i=0; i<n; i=i*2)
    {
        // statement
    }

Let's say, n = 64 [64==n] [2⁶==n]

i = 1, 2,  4,  8,  16,  32 ........  [<span style="color:red">N</span>]

i = 2⁰, 2¹, 2², 2³, 2⁴, 2⁵ ...  [<span style="color:red">2<sup>k</sup>]

that means, 
n = 2<sup>k</sup>

=> log<sub>2</sub>N = log<sub>2</sub>2<sup>k</sup>

[we know, log<sub>x</sub>x = 1]

=> log<sub>2</sub>N = x

=> x = log<sub>2</sub>N



log2(16) = 4 steps [easy, right?]

![alt text](image-3.png)

(4 billion to worst case)

log2(4,000,000,000) = 31.89 = 32 steps !!

![alt text](image-4.png)

# What is O(NlogN) ?

    for (int i=0; i<n; i++) // O(N)
    {
        for (int j=0; j<n; j=j*2) O(logN)
        {
            // statement
        }
    }

# Quiz: 

case-1:

    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j=j*2)
        {
            for (int k=0; k<m; k=k*5)
            {
            // statement
            }
        }
    }

Answer : O(N * logN * logM)

case-2:

    for (int i=0; i<n; i++)
    {
        if (i==1)
        {
            for (int j=0; j<n; j=j++)
            {
            // statement
            }
        }
    }

ANS: O(N)

case-3:

    for (int i=0; i*2<=n; i++) 
        {
            // statement
        }

ANS : O(N)

explanation: 

i*2 <= n means i <=n/2 which is i <= n [contant seperated]

sequence: 

0 2 4 6 8 10 ... n

case-4:

    for (int i=0; i*i<=n; i++) 
        {
            // statement
        }

sequence:

0 1 4 9 16 25 36 49 56 ... 

ANS: O(√N)

case-5:

    for (int i=0; i*i<=n; i=i*2) 
        {
            // statement
        }

ANS: O(logN)