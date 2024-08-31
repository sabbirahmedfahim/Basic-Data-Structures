#include <bits/stdc++.h>
using namespace std;
// think differently ! (much easier and heavier :D)
class maxHeap
{
public:
    vector<int> v;
    maxHeap()
    {

    }
    void print()
    {
        for(int data : v) cout << data << " ";
        cout << endl;
    }
    void up_heapify(int idx)
    {
        // parent -> leftChild  --> (2*i)+1
        // parent -> rightChild --> (2*i)+2
        // child  -> parent     --> (i-1)/2
        while(idx > 0 && v[(idx-1)/2] < v[idx])
        {
            swap(v[(idx-1)/2], v[idx]);
            idx = (idx - 1)/2;
        } 
    }
    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size()-1); // from the last index
    }
    // void down_heapify(int idx)
    // {
    //     int largestIndex = idx;
    //     while (1)
    //     {
    //         int l = (2*idx)+1;
    //         int r = (2*idx)+2;
    //         if(v[largestIndex] < v[l]) largestIndex = l;
    //         if(v[largestIndex] < v[r]) largestIndex = r;
    //     }
    // }
    // void pop(int idx)
    // {
    //     swap(v[idx], v[v.back()]);
    //     v.pop_back();
    //     down_heapify();
    // }
};

int main()
{
    maxHeap heap;
    heap.push(1);
    heap.push(2);
    heap.push(3);
    heap.push(4);
    heap.push(5);

    heap.print();

    return 0;
}