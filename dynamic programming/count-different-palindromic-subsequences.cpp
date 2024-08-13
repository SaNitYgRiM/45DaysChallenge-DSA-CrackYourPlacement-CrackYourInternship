class Solution {
public:
    int countPalindromicSubsequences(string s) {
        int i, j, n = s.size();
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(i = 0; i < n; i++){
            dp[i][i] = 1;
        }
        for(int k = 1; k < n; k++){
            for(i = 0; i < n - k; i++){
                j = i+k;
                if(s[i] == s[j]){
                    int low = i+1, high = j-1;
                    while(low <= high && s[low] != s[i]) low++;
                    while(low <= high && s[high] != s[j]) high--;
                    if(low > high){
                        
                        dp[i][j] = dp[i + 1][j - 1] * 2 + 2;  
                    }else if(low == high){
                        
                         dp[i][j] = dp[i + 1][j - 1] * 2 + 1;
                    }else{
                         dp[i][j] = dp[i + 1][j - 1] * 2 - dp[low + 1][high - 1]; 
                    }
                }else{
                  dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1]; 
                }
                dp[i][j] = dp[i][j] < 0 ? dp[i][j] + 1000000007 : dp[i][j] % 1000000007;
            }
        }
        return dp[0][n-1];
    }
};
