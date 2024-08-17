// copied from instructor
/*
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue <int> q;
        int t = 0;
        int n = tickets.size();
        for(int i = 0; i < n; i++)
        {
            q.push(tickets[i]);
        }
        while(1)
        {
            q.front()--;
            t++;
            if(k==0 && q.front() == 0) break;
            if(q.front()!=0) q.push(q.front());
            q.pop();
            if(k == 0) k = q.size() - 1;
            else k--;
        }
        return t;
    }
};
*/