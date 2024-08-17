// idea from instructor, code mine
/*
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> stA;
        stack <char> stB;
        for(char ch : s)
        {
            if(ch != '#') stA.push(ch);
            else if (!stA.empty()) stA.pop();
        }
        for(char ch : t)
        {
            if(ch != '#') stB.push(ch);
            else if (!stB.empty()) stB.pop();
        }
        if(stA == stB) return true;
        else return false;
    }
};
*/