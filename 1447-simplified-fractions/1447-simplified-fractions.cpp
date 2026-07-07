class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        if(n==1) return ans;
        for(int i=2;i<=n;i++){
             int j=1;
            
             while(j<=i){
                if(j!=1){
                if(gcd(i,j)!=1){ // main line
                    j++;
               continue;}}

                string s;
                s+=to_string(j);
                s+="/";
                s+=to_string(i);
                ans.push_back(s);
                 j++;
             }
        }
  return ans;  }
};