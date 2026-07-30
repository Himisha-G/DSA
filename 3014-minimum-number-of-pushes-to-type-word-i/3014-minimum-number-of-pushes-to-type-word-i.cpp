class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int mult=1;
        int ans=0;
     while(n>0){
        if(n>=8)
            ans +=8*mult;
        else{
            ans+=n*mult;
        }
            n=n-8;
            mult=mult+1;
     }
      return ans;
    }
};