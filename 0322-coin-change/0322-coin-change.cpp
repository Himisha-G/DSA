class Solution {
public:
    int solve(vector<int>& coins,int index, int amount,vector<vector<int>>&dp){
          if(amount==0){
            return 0;
          }
          if(index==coins.size()){
           return 1e9;
          }
         if(dp[index][amount]!=-1){
            return dp[index][amount];
         }
            int pick=1e9;
          if(coins[index]<=amount)
           pick = 1 + solve(coins,index,amount-coins[index], dp);
          int notpick=solve(coins,index+1,amount, dp);
          return dp[index][amount] = min(pick,notpick);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0){return 0;}
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=solve(coins,0,amount,dp);
        if(ans>=1e9) return -1;
   return ans; }
};