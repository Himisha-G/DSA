class Solution {
public:
   vector<vector<int>>ans;
  void  comb(vector<int>& candidates, int target,int index, vector<int>current){
     if(target==0){
            ans.push_back(current);
           return;
        }
    if(target<0){
        return;
    }
     if(index==candidates.size()){
         return;
     }
     current.push_back(candidates[index]);
     comb(candidates,target-candidates[index],index,current);
     current.pop_back();
     comb(candidates,target,index+1,current);

 
  }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<int>current;
     comb(candidates,target,0,current);
     return ans;       
    }
};