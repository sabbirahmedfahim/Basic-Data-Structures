/*
Time complexity is not about the time a code need get executed,
because a similar code executes faster in super-computers or even
macbook compared to Windows XP 1gb ram.
Then, what is the time complexity?
It is about the number of steps it's need to get executed.
#Big_O_notation 
O(steps)

Grammar:
1. Always calculate for worst case
2. Ignore the constants (like 2N, ignore N)
**mostly complexity comes from loop

case-1:
for (i=0; i<n ;i++) ...
for the case, O(n)

case-2:
for (i=0; i<n ;i++) ...
for (i=0; i<100 ;i++) ...
for case-2, O(n) [because n+100, 100 is very very few]

case-3:
for (i=0; i<n ;i++) ...
for (i=0; i<n ;i++) ...
for case-2, O(n) [because n+n = 2n, & we know constant is very very little]

case-4:
for (i=0; i<n ;i++) ...
for (i=0; i<m ;i++) ...
for case-2, O(n+m) [because we do not know the value of n,m]

O(1) [pronounciation: o of one]
and O(1) do not take any time. constant time.   
*/