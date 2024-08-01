class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0;
        for(auto i:nums){
            if(i==0)cnt0++;
            else if(i==1)cnt1++;
        }
      //  cout<<cnt0<<" "<<cnt1;
        for(int i=0;i<nums.size();i++){
            if(cnt0>0){
                nums[i]=0;
                cnt0--;
            }
            else if(cnt1>0){
                nums[i]=1;
                cnt1--;
            }
            else nums[i]=2;
        }
        
    }
};
