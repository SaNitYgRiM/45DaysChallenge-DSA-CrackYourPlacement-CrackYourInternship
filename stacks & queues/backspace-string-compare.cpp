class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> stk1,stk2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !stk1.empty())stk1.pop();
            else if(s[i]!='#')stk1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !stk2.empty())stk2.pop();
              else if(t[i]!='#')stk2.push(t[i]);
        }
        return stk1==stk2;
    }
};
