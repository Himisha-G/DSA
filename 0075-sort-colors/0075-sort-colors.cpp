class Solution {
public:
    void sortColors(vector<int>& nums) {
         int low=0;
         int high=nums.size()-1;
           int start=0;
         while(start<=high){
          
            if(nums[start]==2){
                swap(nums[start],nums[high]);
                high--;
            }
            else if (nums[start]==0){
                swap(nums[low],nums[start]);
                low++;
                start++;
                
            }
            else{
start++;
            }
         }
}
};