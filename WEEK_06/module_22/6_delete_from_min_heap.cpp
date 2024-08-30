#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x) // O(logN)
{
    v.push_back(x);
    int cur_index = v.size() - 1;
    while (cur_index != 0) // O(logN)
    {
        int parent_index = (cur_index - 1) / 2;
        if (v[cur_index] < v[parent_index]) // children index > parent index
            swap(v[cur_index], v[parent_index]);
        else
            break; // illustrate why
        cur_index = parent_index;
    }
}
void delete_heap(vector<int> &v) // O(logN)
{
    v[0] = v.back();
    v.pop_back();   
    int cur_index = 0;
    while (1)
    {
        int left_index = (cur_index*2)+1;
        int right_index = (cur_index*2)+2;
        if(left_index <= v.back() && right_index <= v.back())
        {
            // duitai ache
            if(v[left_index] <= v[right_index] && v[left_index < v[cur_index]])
            {
                swap(v[left_index], v[cur_index]);
                cur_index = left_index;
            }    
            else if(v[right_index] <= v[left_index] && v[right_index] < v[cur_index])
            {
                swap(v[right_index], v[cur_index]);
                cur_index = right_index;
            }
            else break;
        }
        else if(left_index <= v.back())
        {
            // left ache
            if(v[left_index] < v[cur_index])
            {
                swap(v[left_index], v[cur_index]);
                cur_index = left_index;
            }
            else break;
        }
        else if(right_index <= v.back())
        {
            // right ache
            if(v[right_index] < v[cur_index])
            {
                swap(v[right_index], v[cur_index]);
                cur_index = right_index;
            }
            else break;
        }
        else break;
    }
    
}
void print_heap(vector<int> v)
{
    for(int data : v) cout << data << " ";
    cout << endl;
}
int main()
{
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        insert_heap(v, data);
    }
    delete_heap(v);
    print_heap(v);

    return 0;
}