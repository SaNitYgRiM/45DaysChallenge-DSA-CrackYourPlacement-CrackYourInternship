//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       long long int pdt=1;
       long long int pdt2=1;
       int cnt=0;
        for(auto i:nums){
            if(i==0)cnt++;
            else pdt2*=i;
            
            pdt*=i;//cout<<i;
        }
       // cout<<pdt;
      // cout<<cnt;
        vector<long long int> res;
        for(auto j:nums){
            if(cnt==1)
               { if(j==0)res.push_back(pdt2);
                   else res.push_back(0);
               }
            else if (cnt>1) res.push_back(0);
           else  res.push_back(pdt/j);
        }
        return res;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
