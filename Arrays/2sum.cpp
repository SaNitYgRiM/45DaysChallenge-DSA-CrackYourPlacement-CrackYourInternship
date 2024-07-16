class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        //vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(umap.count(target-nums[i])!=0)return {umap[target-nums[i]],i};
            umap[nums[i]]=i;
            
        }
        
        return {};
    }
};
