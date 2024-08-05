class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        bool present=false;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    while(j<nums2.size()-1){
                        if(nums2[j+1]>nums1[i]){
                            stk.push(nums2[j+1]);
                            present=true;
                            break;
                        }
                        j++;
                    }
                  //  if(j==nums2.size()-1)stk.push(-1);
                    if(!present || j==nums2.size()-1)stk.push(-1);
                    
                }
            }
        }
        
        vector<int> res;
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
