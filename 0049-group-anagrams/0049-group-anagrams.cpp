class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> help(strs.begin(),strs.end());
        vector<vector<string>> ans;
        int n=strs.size();
       for(string& word: strs){
        sort(word.begin(),word.end());
       }
       for(int i=0;i<n;i++){
        vector<string> a;
    if(strs[i]!="-1"){
        a.push_back(help[i]);
        for(int j=i+1;j<n;j++){
            if(strs[i]==strs[j]){
                //cout<<strs[j]<<" "<<help[j]<<endl;
                a.push_back(help[j]);
                strs[j]="-1";
               
            }
            
        }
        strs[i]="-1";
        ans.push_back(a);}

       }

      return ans;  
    }
};