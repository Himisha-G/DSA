class Solution {
public:
  bool solve(vector<int>& nums,int index, int sum1,vector<vector<int>>&dp){
       if(sum1==0){
        return true;
       }
       if(index==nums.size()){
        return false;
       }
       if(dp[index][sum1]!=-1){
        return dp[index][sum1];
       }
     bool pick=false;
     if(sum1>=nums[index])
       pick = solve(nums,index+1,sum1-nums[index],dp);
       bool notpick = solve(nums,index+1,sum1,dp);

     return dp[index][sum1]= pick or notpick;
   }

    bool canPartition(vector<int>& nums) {
     int sum=0;
     int n=nums.size();
     for(int i=0;i<nums.size();i++){
         sum+=nums[i];
     }
     if(sum%2!=0){
        return false;
     }

        sum=sum/2;

     vector<vector<int>>dp(n,vector<int>(sum+1,-1));
     bool ans = solve(nums,0,sum,dp);
 return ans;  }
};