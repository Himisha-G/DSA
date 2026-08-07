class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
      for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i]*=2;
            nums[i+1]=0;
        }
      }

      int start = 0;
      while(start<nums.size()){
        while(start<nums.size() && nums[start]!=0){
            start++;
        }
       if(start<nums.size())
        if(nums[start]==0 ){
            int start1 = start;
            while(start1<nums.size() && nums[start1]==0){
                start1++;
            }
             if(start1<nums.size())
            swap(nums[start],nums[start1]);
            start++;
        }
      }
   
   return nums; }
};