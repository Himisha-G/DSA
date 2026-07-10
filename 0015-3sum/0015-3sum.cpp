class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int sec=i+1;
        int last=nums.size()-1;

        while(sec<last){
            if(nums[i]+nums[sec]+nums[last]==0){
                ans.push_back({nums[i],nums[sec],nums[last]});
                 while (sec < last && nums[sec] == nums[sec + 1]) sec++;
                while (sec < last && nums[last] == nums[last - 1]) last--;
                sec++;
               last--;
            }
            else if(nums[i]+nums[sec]+nums[last]>0){
                last--;
            }
            else{
                sec++;
            }
        }
     }

  return ans;  }
};