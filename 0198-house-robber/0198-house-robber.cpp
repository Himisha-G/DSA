class Solution {
public:
   int solve (vector<int>& nums, int index, vector<int>& dp){
    if(index==0){
        return nums[0];
    }
    if(index<0){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }

    int fp = solve(nums,index-2,dp)+nums[index];
    int rp= solve(nums,index-1,dp);

    dp[index]=max(fp,rp);
    return dp[index];
   }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        
      int ans = solve(nums,n-1,dp);
  return ans; }
};