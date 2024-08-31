#include <bits/stdc++.h>
using namespace std;
void insert_in_max_heap(vector<int> &v, int x) // O(logN)
{
    v.push_back(x);
    int cur_index = v.size() - 1;
    while (cur_index != 0) // O(logN)
    {
        int parent_index = (cur_index - 1) / 2;
        if (v[cur_index] > v[parent_index]) // children index > parent index
            swap(v[cur_index], v[parent_index]);
        else
            break; // illustrate why
        cur_index = parent_index;
    }
}
void delete_from_max_heap(vector<int> &v) // O(logN)
{
    v[0] = v.back(); // v.back() value itself remains same at the last index because: IMAGINE
    v.pop_back();   
    int cur_index = 0; // parent index
    while (1)
    {
        int leftChild_idx = (cur_index*2)+1; //  i->leftChild  --> (i*2)+1
        int rightChild_idx = (cur_index*2)+2; // i->rightChild --> (i*2)+2

        // duitai ache
        if(leftChild_idx <= v.back() && rightChild_idx <= v.back()) 
        {
            if (v[leftChild_idx] >= v[rightChild_idx] && v[leftChild_idx] > v[cur_index])
            {
                swap(v[leftChild_idx], v[cur_index]);
                cur_index = leftChild_idx;
            }    
            else if(v[rightChild_idx]>=v[leftChild_idx] && v[rightChild_idx] > v[cur_index])
            {
                swap(v[rightChild_idx], v[cur_index]);
                cur_index = rightChild_idx;
            }
            else break;
        }
        // left ache
        else if(leftChild_idx <= v.back()) 
        {
            if(v[leftChild_idx] > v[cur_index])
            {
                swap(v[leftChild_idx], v[cur_index]);
                cur_index = leftChild_idx;
            }
            else break;
        }
        // right ache
        else if(rightChild_idx <= v.back()) 
        {
            if(v[rightChild_idx] > v[cur_index])
            {
                swap(v[rightChild_idx], v[cur_index]);
                cur_index = rightChild_idx;
            }
            else break;
        }
        // konotai nai
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
        insert_in_max_heap(v, data);
    }
    delete_from_max_heap(v);
    print_heap(v);

    return 0;
}
