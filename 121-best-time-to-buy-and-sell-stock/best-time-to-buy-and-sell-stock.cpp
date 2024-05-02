class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minPrice = prices[0];
        for(int i = 0; i < prices.size(); i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
            else{
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }
        return maxProfit;
    }
};