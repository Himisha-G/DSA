class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int index=-1;
            int check=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                   check=1;
                }
                if(check==1 && nums2[j]>nums1[i] ){
                       index=j;
                       break;
                }
            }
      if(index!=-1){
        ans.push_back(nums2[index]);
      }
      else{
         ans.push_back(index);
      }}

       
   return ans; }
};