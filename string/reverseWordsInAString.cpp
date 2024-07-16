class Solution {
public:
    string reverseWords(string s) {
        string rev,word;
        vector<string> str;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    str.push_back(word);
                    word = "";
                }
            }
        }
         if (!word.empty()) {
            str.push_back(word);
        }
        for(int i=str.size()-1;i>=0;i--){
            rev=rev+str[i];
            if(i>0)rev+=" ";
            }
       // cout<<rev;
       
        return rev;
    }
};
