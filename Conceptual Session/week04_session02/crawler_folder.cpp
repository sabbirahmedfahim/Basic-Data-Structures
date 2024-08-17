// 40% from instructor
/*
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for (string s : logs) {
            if (!st.empty() && s == "../")
                st.pop();
            else if(s != "../" && s != "./")
                st.push(s);
        }
        int count = 0;
        while(!st.empty())
        {
            count++;
            st.pop();
        }
        return count;
    }
};
*/