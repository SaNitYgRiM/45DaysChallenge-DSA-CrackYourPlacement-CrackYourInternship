class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        int major=nums.size()/2;
        major++;
        for(auto i:nums)umap[i]++;
        for(auto i:umap){
            if(i.second>=major)return i.first;
        }
        return 0;
    }
};
