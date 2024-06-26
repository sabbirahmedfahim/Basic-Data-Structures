#include <bits/stdc++.h>
using namespace std;

int main()
{vv
    int n;
    cin >> n;
    int arr[10];

    while (true)
    {
        n++;
        int my_n = n;
        int i = 0;
        bool flag = true;
        while (n != 0)
        {
            arr[i] = n % 10;
            n /= 10;
            i++;
        }
        int arr_size = i;
        sort(arr, arr + arr_size);
        for (int j = 0; j < arr_size - 1; j++)
        {
            if (arr[j] == arr[j + 1])
            {
                flag = false;
                break;
            }
        }
        n = my_n;
        if (flag)
        {
            cout << my_n;
            break;
        }
    }

    return 0;
}