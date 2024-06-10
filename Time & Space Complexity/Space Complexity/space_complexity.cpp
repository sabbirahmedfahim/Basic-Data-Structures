/*
"Time complexity maximum 10^7,
meanwhile Space complexity maximum 10^6"
case-1:
int x = a + b;
for this operation: a, b is input space, and x is auxiliary space
x   => O(1) 
a+b => O(1)


case-2:
int arr1[n] => input space
int arr2[5] => auxiliary space
"Time complexity depends on step, while Space complexity depends on size"
Space Complexity for the case-2 is:
O(1) + O(n) = O(n) [think]

case-3:
int arr1[n] => input space
int arr2[n*n] => ? space
"Time complexity depends on step, while Space complexity Depends on Size"
Space Complexity for the case-3 is O(n*n) [think... ummm... maximum one]
O(n) + O(n*n) = O(n*n) [tHink]

case-4:
int arr[n][m]
O(n*n)
maximum size for n is 10^3 [think why]

*/