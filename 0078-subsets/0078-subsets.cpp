class Solution {
public:
    vector<vector<int>> result;
  void BackTracking(vector<int>&nums, int start, vector<int>&current){
  if(start==nums.size()){
    result.push_back(current);
    return;
  }
  current.push_back(nums[start]);
   BackTracking(nums,start+1,current);
  current.pop_back();
   BackTracking(nums,start+1,current);


   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
       BackTracking(nums,0,current);
       return result;
    }
};