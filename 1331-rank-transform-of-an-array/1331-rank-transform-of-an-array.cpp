class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy(arr.begin(),arr.end());
        sort(copy.begin(),copy.end());
     map<int,int>mp;
        int c=1;
        for(int i=0;i<arr.size();i++){
            if(i>=1 && copy[i]==copy[i-1]){
                continue;
            }
            else{
                mp[copy[i]]=c++;
            }
        }

        for(int i=0;i<arr.size();i++){
            copy[i]=mp[arr[i]];
        }
    return copy;}
};