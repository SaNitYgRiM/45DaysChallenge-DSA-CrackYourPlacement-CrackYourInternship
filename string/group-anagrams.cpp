class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //if(strs.size()==1)return strs;
       // sort(strs.begin(),strs.end());
       unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string w=strs[i];
            sort(w.begin(),w.end());
            m[w].push_back(strs[i]);
        }
        vector<vector<string>> anagram;
        for(auto w:m){
            anagram.push_back(w.second);
        }
        return anagram;
    }
};