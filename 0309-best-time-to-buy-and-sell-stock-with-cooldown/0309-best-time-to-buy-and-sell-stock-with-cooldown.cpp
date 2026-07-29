class Solution {
public:
    int f(vector<int>& prices, int n, int i,int buy,int cooldown, vector<vector<vector<int>>>&dp){
        if(i==n){
            return 0;
        }
        
        if(dp[i][buy][cooldown]!=-1){
              return dp[i][buy][cooldown];
        }
        int profit =0;
        if(buy && !cooldown){
           profit  = max(-prices[i]+f(prices,n,i+1,0,0,dp),f(prices,n,i+1,1,0,dp) );
        }
        else if(buy && cooldown){
           profit = f(prices,n,i+1,1,0,dp);
        }
       if (!buy && !cooldown){
           profit = max(prices[i]+f(prices,n,i+1,1,1,dp),f(prices,n,i+1,0,0,dp));
        }
        
 return dp[i][buy][cooldown]=profit;

    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(2,-1)));
        int ans = f(prices,n,0,1,0, dp);
    return ans;}
};