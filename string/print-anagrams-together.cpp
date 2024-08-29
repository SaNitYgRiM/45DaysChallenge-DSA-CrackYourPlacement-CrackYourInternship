
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) 
    {
        vector<vector<string> > result;
    
        unordered_map <string,vector<string> > umap; 
        
        for(int i =0; i<string_list.size(); i++ )
        {
            string s = string_list[i];
         
           sort(s.begin(),s.end());
            
         umap[s].push_back(string_list[i]);
        }
        for(auto itr= umap.begin(); itr!=umap.end(); itr++)
            result.push_back(itr->second);
        
        return result;
    }
};
