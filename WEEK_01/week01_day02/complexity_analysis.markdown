# Complexity Analysis

1. 

    int k=1;
    while(k<=n) // O(logN) IMAGINE
    {
	  cout<<k<<endl;
	  k=k*2; 
    }

2. 

    for (int i = 0; i < n; i++) // O(N^2)
        for (int j = i; j > 0; j--)
            cout << i << j;

3. 
 
    for (int i = 0; i < n; i++) // O(N^3)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

4. 

    for(int i=n/2;i<=n;i++) // O(NlogN)
    {
	for(int j=1;j<=n;j=j*2)
      {
   		cout<<i<<j<<endl;
	  }
    }

5. 

    for(int i=n/2;i<=n;i++) // O(NlogN)
    {
	for(int j=1;j<=n;j=j+i) 
      {
   		cout<<i<<j<<endl;
	  }
    }
