class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(char str:s){
       if (str == '(' || str == '[' || str == '{') {
                mystack.push(str);
            } else if (!mystack.empty() &&
                       ((str == ')' && mystack.top() == '(') ||
                        (str == ']' && mystack.top() == '[') ||
                        (str == '}' && mystack.top() == '{'))) {
                mystack.pop();
            } else {
              return false;
            }
        }
        return mystack.empty();
     
              
    }
};
