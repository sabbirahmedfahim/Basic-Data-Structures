// 50% from instructor
/*
class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        for(char ch : s)
        {
            // if(ch == st.top() && !st.empty()) // think why it is wrong
            if(!st.empty() && ch == st.top()) st.pop();
            else st.push(ch);       
        }
        string myS;
        while(!st.empty())
        {
            myS+=st.top();
            st.pop();
        }
        reverse(myS.begin(), myS.end());
        return myS;
    }
};
*/