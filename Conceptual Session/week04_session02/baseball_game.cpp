// learned new information : 
// Type Conversion with Functions: stoi(s) is a function that converts a string to an integer.
/*
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> st;
        stack <int> stD;
        for(string s: operations)
        {
            if(s == "C") 
            {
                st.pop();
            }
            else if(s == "D")
            {
                st.push(st.top()*2);
            }
            else if(s == "+") 
            {
                int val = st.top();
                st.pop();
                int val2 = st.top();
                st.push(val);
                st.push(val + val2);
            }
            else 
            {
                // st.push((s - '0'); // why not?
                int x = stoi(s);
                st.push(x);
            }
        }
        int count = 0;
        while(!st.empty())
        {
            count+=st.top();
            st.pop();
        }
        return count;
    }
};
*/ 