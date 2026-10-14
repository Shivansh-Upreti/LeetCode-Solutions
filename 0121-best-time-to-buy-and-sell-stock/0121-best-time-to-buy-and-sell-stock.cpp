class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int best=prices[0];
            int profit=0;
            for(int i=1;i<prices.size();i++){
                if(prices[i]<best){
                    best=prices[i];
                }
                int currProfit=prices[i]-best;
                if(currProfit>profit){
                    profit=currProfit;
                }
            }
            return profit;
    }
};