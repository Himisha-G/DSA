class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min_price=INT_MAX;
       int maxmProfit=INT_MIN;
       for(int i=0;i<prices.size();i++){
           min_price=min(min_price,prices[i]);
           maxmProfit=max(maxmProfit, prices[i]-min_price);
       }
   return maxmProfit;
    }
};

